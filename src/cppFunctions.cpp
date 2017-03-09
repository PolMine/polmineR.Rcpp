extern "C" {
  #include <stdio.h>
  #include <stdlib.h>
  #include <unistd.h>
  #include <string.h>
  #include <cl.h>
}

#include <Rcpp.h>


int region_matrix_to_size(Rcpp::IntegerMatrix matrix){
  int n;
  int size = 0;
  for (n = 0; n < matrix.nrow(); n++){
    size += matrix(n,1) - matrix(n,0) + 1;
  }
  return size;
}



Attribute* make_s_attribute(SEXP corpus, SEXP s_attribute, SEXP registry){
  
  char* reg_dir = strdup(Rcpp::as<std::string>(registry).c_str());
  char* s_attr = strdup(Rcpp::as<std::string>(s_attribute).c_str());
  char* corpus_pointer  = strdup(Rcpp::as<std::string>(corpus).c_str());
  
  Corpus *corpus_obj = cl_new_corpus(reg_dir, corpus_pointer);
  Attribute* att = cl_new_attribute(corpus_obj, s_attr, ATT_STRUC);
  
  return att;
}


Attribute* make_p_attribute(SEXP corpus, SEXP p_attribute, SEXP registry){
  
  char* reg_dir = strdup(Rcpp::as<std::string>(registry).c_str());
  char* p_attr = strdup(Rcpp::as<std::string>(p_attribute).c_str());
  char* corpus_pointer  = strdup(Rcpp::as<std::string>(corpus).c_str());
  
  Corpus *corpus_obj = cl_new_corpus(reg_dir, corpus_pointer);
  Attribute* att = cl_new_attribute(corpus_obj, p_attr, ATT_POS);
  
  return att;
}



// [[Rcpp::export]]
Rcpp::StringVector decode_s_attribute(SEXP corpus, SEXP s_attribute, SEXP registry) {
  
  Attribute* att = make_s_attribute(corpus, s_attribute, registry);
  
  int n;
  int att_size = cl_max_struc(att);
  
  Rcpp::StringVector result(att_size);

  for (n = 0; n < att_size; n++) {
    result[n] = cl_struc2str(att, n);
  }
  
  return result;
}


// [[Rcpp::export]]
Rcpp::IntegerVector get_count_vector(SEXP corpus, SEXP p_attribute, SEXP registry){
  
  Attribute *att = make_p_attribute(corpus, p_attribute, registry);
  
  int n;
  int max_id = cl_max_id(att);
  Rcpp::IntegerVector count(max_id);
  
  for (n = 0; n < max_id; n++){
    count[n] = cl_id2freq(att, n);
  }
  return count;
}


// [[Rcpp::export]]
Rcpp::IntegerMatrix get_region_matrix(SEXP corpus, SEXP s_attribute, SEXP strucs, SEXP registry){
  
  Attribute* att = make_s_attribute(corpus, s_attribute, registry);
  
  std::vector<int> strucs_int = Rcpp::as<std::vector<int> >(strucs);
  int strucs_length = strucs_int.size();
  int n, start, end;
  
  Rcpp::IntegerMatrix cpos_matrix(strucs_length,2);
  for (n = 0; n < strucs_length; n++){
    cl_struc2cpos(att, strucs_int[n], &start, &end);
    cpos_matrix(n,0) = start;
    cpos_matrix(n,1) = end;
  }
  return cpos_matrix;
}


// [[Rcpp::export]]
Rcpp::IntegerMatrix get_cbow_matrix(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP matrix, SEXP window){
  
  Attribute* att = make_p_attribute(corpus, p_attribute, registry);
  
  int window_size = Rcpp::as<int>(window);
  Rcpp::IntegerMatrix region_matrix(matrix);
  
  int ncol_window_matrix = window_size * 2 + 1;
  int nrow_window_matrix = region_matrix_to_size(region_matrix);

  Rcpp::IntegerMatrix window_matrix(nrow_window_matrix, ncol_window_matrix);
  std::fill(window_matrix.begin(), window_matrix.end(), -1);
  
  int cpos, col, id, region_size, row_to_fill, n;
  int row_base = 0;
  int row = 0;
  for (n = 0; n < region_matrix.nrow(); n++){
    region_size = region_matrix(n,1) - region_matrix(n,0) + 1;
    for (cpos = region_matrix(n,0); cpos <= region_matrix(n,1); cpos++){
      id = cl_cpos2id(att, cpos);
      for (col = 0; col < window_matrix.ncol(); col++){
        row_to_fill = row - col + window_size;
        if (row_to_fill >= row_base && row_to_fill < (row_base + region_size)){
          window_matrix(row_to_fill,col) = id;
        }
      }
      row++;
    }
    row_base = row;
  }
  return window_matrix;
}


// [[Rcpp::export]]
Rcpp::IntegerVector regions_to_ids(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP matrix){
  
  Attribute* att = make_p_attribute(corpus, p_attribute, registry);
  
  Rcpp::IntegerMatrix region_matrix(matrix);
  
  int size = region_matrix_to_size(region_matrix);
  Rcpp::IntegerVector ids(size);
  
  int n, cpos;
  int i = 0;
  for (n = 0; n < region_matrix.nrow(); n++){
    for (cpos = region_matrix(n,0); cpos <= region_matrix(n,1); cpos++){
      ids(i) = cl_cpos2id(att, cpos);
      i++;
    }
  }
  
  return ids;
}

Rcpp::IntegerMatrix ids_to_count_matrix(Rcpp::IntegerVector ids){
  
  Rcpp::IntegerVector count(max(ids) + 1);
  
  int n;
  for (n = 0; n < ids.length(); n++){
    count(ids[n])++;
  }
  
  int filled = 0;
  for (n = 0; n < count.length(); n++){
    if (count[n] > 0){
      filled++;
    }
  }
  
  Rcpp::IntegerMatrix count_matrix(filled,2);
  int i = 0;
  for (n = 0; n < count.length(); n++){
    if (count[n] > 0){
      count_matrix(i,0) = n;
      count_matrix(i,1) = count[n];
      i++;
    }
  }
  
  return count_matrix;
  
}

// [[Rcpp::export]]
Rcpp::IntegerVector regions_to_count_matrix(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP matrix){
  
  Rcpp::IntegerVector ids = regions_to_ids(corpus, p_attribute, registry, matrix);
  Rcpp::IntegerMatrix count_matrix = ids_to_count_matrix(ids);

  return count_matrix;
}

extern "C" {
  #include <stdio.h>
  #include <stdlib.h>
  #include <unistd.h>
  #include <string.h>
  #include <cl.h>
}

#include <Rcpp.h>



// [[Rcpp::export]]
int cl_attribute_size(SEXP corpus, SEXP s_attribute, SEXP registry) {
  int result = 0;
  return(result);
}


// [[Rcpp::export]]
int cl_lexicon_size(SEXP corpus, SEXP p_attribute, SEXP registry){
  int result = 0;
  return(result);
}


// [[Rcpp::export]]
Rcpp::IntegerVector cl_cpos2struc(SEXP corpus, SEXP p_attribute, SEXP cpos, SEXP registry){
  Rcpp::IntegerVector result(1);
}


// [[Rcpp::export]]
Rcpp::StringVector cl_cpos2str(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP cpos){
  return ( Rcpp::StringVector(1) );
}


// [[Rcpp::export]]
Rcpp::IntegerVector cl_cpos2id(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP cpos){
  Rcpp::IntegerVector result(1);
}

// [[Rcpp::export]]
Rcpp::IntegerVector cl_struc2cpos(SEXP corpus, SEXP s_attribute, SEXP registry, SEXP struc){
  Rcpp::IntegerVector result(1);
}


// [[Rcpp::export]]
Rcpp::StringVector cl_id2str(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP cpos){
  return ( Rcpp::StringVector(1) );
}


// [[Rcpp::export]]
Rcpp::StringVector cl_struc2str(SEXP corpus, SEXP s_attribute, SEXP struc, SEXP registry){
  return ( Rcpp::StringVector(1) );
}


// [[Rcpp::export]]
Rcpp::IntegerVector cl_regex2id(SEXP corpus, SEXP p_attribute, SEXP regex, SEXP registry){
  Rcpp::IntegerVector result(1);
}
 

// [[Rcpp::export]]
Rcpp::IntegerVector cl_str2id(SEXP corpus, SEXP p_attribute, SEXP str){
  Rcpp::IntegerVector result(1);
}

// [[Rcpp::export]]
Rcpp::IntegerVector cl_id2freq(SEXP corpus, SEXP p_attribute, SEXP id, SEXP registry){
  Rcpp::IntegerVector result(1);
}


// [[Rcpp::export]]
Rcpp::IntegerVector cl_id2cpos(SEXP corpus, SEXP p_attribute, SEXP id){
  Rcpp::IntegerVector result(1);
}


// [[Rcpp::export]]
Rcpp::IntegerVector cl_cpos2lbound(SEXP corpus, SEXP s_attribute, SEXP cpos, SEXP registry){
  Rcpp::IntegerVector result(1);
}


Rcpp::IntegerVector cl_cpos2rbound(SEXP corpus, SEXP s_attribute, SEXP cpos, SEXP registry){
  Rcpp::IntegerVector result(1);
}
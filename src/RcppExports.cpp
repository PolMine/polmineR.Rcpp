// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// decode_s_attribute
Rcpp::StringVector decode_s_attribute(SEXP corpus, SEXP s_attribute, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_decode_s_attribute(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(decode_s_attribute(corpus, s_attribute, registry));
    return rcpp_result_gen;
END_RCPP
}
// get_count_vector
Rcpp::IntegerVector get_count_vector(SEXP corpus, SEXP p_attribute, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_get_count_vector(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(get_count_vector(corpus, p_attribute, registry));
    return rcpp_result_gen;
END_RCPP
}
// get_region_matrix
Rcpp::IntegerMatrix get_region_matrix(SEXP corpus, SEXP s_attribute, SEXP strucs, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_get_region_matrix(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP strucsSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type strucs(strucsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(get_region_matrix(corpus, s_attribute, strucs, registry));
    return rcpp_result_gen;
END_RCPP
}
// get_cbow_matrix
Rcpp::IntegerMatrix get_cbow_matrix(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP matrix, SEXP window);
RcppExport SEXP _polmineR_Rcpp_get_cbow_matrix(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP matrixSEXP, SEXP windowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< SEXP >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type window(windowSEXP);
    rcpp_result_gen = Rcpp::wrap(get_cbow_matrix(corpus, p_attribute, registry, matrix, window));
    return rcpp_result_gen;
END_RCPP
}
// regions_to_ids
Rcpp::IntegerVector regions_to_ids(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP matrix);
RcppExport SEXP _polmineR_Rcpp_regions_to_ids(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< SEXP >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(regions_to_ids(corpus, p_attribute, registry, matrix));
    return rcpp_result_gen;
END_RCPP
}
// regions_to_count_matrix
Rcpp::IntegerVector regions_to_count_matrix(SEXP corpus, SEXP p_attribute, SEXP registry, SEXP matrix);
RcppExport SEXP _polmineR_Rcpp_regions_to_count_matrix(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< SEXP >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(regions_to_count_matrix(corpus, p_attribute, registry, matrix));
    return rcpp_result_gen;
END_RCPP
}
// attribute_size
int attribute_size(SEXP corpus, SEXP attribute, SEXP attribute_type, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_attribute_size(SEXP corpusSEXP, SEXP attributeSEXP, SEXP attribute_typeSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type attribute(attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type attribute_type(attribute_typeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(attribute_size(corpus, attribute, attribute_type, registry));
    return rcpp_result_gen;
END_RCPP
}
// lexicon_size
int lexicon_size(SEXP corpus, SEXP p_attribute, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_lexicon_size(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(lexicon_size(corpus, p_attribute, registry));
    return rcpp_result_gen;
END_RCPP
}
// cpos2struc
Rcpp::IntegerVector cpos2struc(SEXP corpus, SEXP p_attribute, Rcpp::IntegerVector cpos, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_cpos2struc(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP cposSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cpos(cposSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(cpos2struc(corpus, p_attribute, cpos, registry));
    return rcpp_result_gen;
END_RCPP
}
// cpos2str
Rcpp::StringVector cpos2str(SEXP corpus, SEXP p_attribute, SEXP registry, Rcpp::IntegerVector cpos);
RcppExport SEXP _polmineR_Rcpp_cpos2str(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP cposSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cpos(cposSEXP);
    rcpp_result_gen = Rcpp::wrap(cpos2str(corpus, p_attribute, registry, cpos));
    return rcpp_result_gen;
END_RCPP
}
// cpos2id
Rcpp::IntegerVector cpos2id(SEXP corpus, SEXP p_attribute, SEXP registry, Rcpp::IntegerVector cpos);
RcppExport SEXP _polmineR_Rcpp_cpos2id(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP cposSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cpos(cposSEXP);
    rcpp_result_gen = Rcpp::wrap(cpos2id(corpus, p_attribute, registry, cpos));
    return rcpp_result_gen;
END_RCPP
}
// struc2cpos
Rcpp::IntegerVector struc2cpos(SEXP corpus, SEXP s_attribute, SEXP registry, int struc);
RcppExport SEXP _polmineR_Rcpp_struc2cpos(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP registrySEXP, SEXP strucSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< int >::type struc(strucSEXP);
    rcpp_result_gen = Rcpp::wrap(struc2cpos(corpus, s_attribute, registry, struc));
    return rcpp_result_gen;
END_RCPP
}
// id2str
Rcpp::StringVector id2str(SEXP corpus, SEXP p_attribute, SEXP registry, Rcpp::IntegerVector id);
RcppExport SEXP _polmineR_Rcpp_id2str(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP registrySEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(id2str(corpus, p_attribute, registry, id));
    return rcpp_result_gen;
END_RCPP
}
// struc2str
Rcpp::StringVector struc2str(SEXP corpus, SEXP s_attribute, Rcpp::IntegerVector struc, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_struc2str(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP strucSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type struc(strucSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(struc2str(corpus, s_attribute, struc, registry));
    return rcpp_result_gen;
END_RCPP
}
// regex2id
Rcpp::IntegerVector regex2id(SEXP corpus, SEXP p_attribute, SEXP regex, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_regex2id(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP regexSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type regex(regexSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(regex2id(corpus, p_attribute, regex, registry));
    return rcpp_result_gen;
END_RCPP
}
// str2id
Rcpp::IntegerVector str2id(SEXP corpus, SEXP p_attribute, Rcpp::StringVector str, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_str2id(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP strSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type str(strSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(str2id(corpus, p_attribute, str, registry));
    return rcpp_result_gen;
END_RCPP
}
// id2freq
Rcpp::IntegerVector id2freq(SEXP corpus, SEXP p_attribute, Rcpp::IntegerVector id, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_id2freq(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP idSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id(idSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(id2freq(corpus, p_attribute, id, registry));
    return rcpp_result_gen;
END_RCPP
}
// id2cpos
Rcpp::IntegerVector id2cpos(SEXP corpus, SEXP p_attribute, SEXP id, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_id2cpos(SEXP corpusSEXP, SEXP p_attributeSEXP, SEXP idSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type p_attribute(p_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(id2cpos(corpus, p_attribute, id, registry));
    return rcpp_result_gen;
END_RCPP
}
// cpos2lbound
int cpos2lbound(SEXP corpus, SEXP s_attribute, SEXP cpos, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_cpos2lbound(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP cposSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type cpos(cposSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(cpos2lbound(corpus, s_attribute, cpos, registry));
    return rcpp_result_gen;
END_RCPP
}
// cpos2rbound
int cpos2rbound(SEXP corpus, SEXP s_attribute, SEXP cpos, SEXP registry);
RcppExport SEXP _polmineR_Rcpp_cpos2rbound(SEXP corpusSEXP, SEXP s_attributeSEXP, SEXP cposSEXP, SEXP registrySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type corpus(corpusSEXP);
    Rcpp::traits::input_parameter< SEXP >::type s_attribute(s_attributeSEXP);
    Rcpp::traits::input_parameter< SEXP >::type cpos(cposSEXP);
    Rcpp::traits::input_parameter< SEXP >::type registry(registrySEXP);
    rcpp_result_gen = Rcpp::wrap(cpos2rbound(corpus, s_attribute, cpos, registry));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_polmineR_Rcpp_decode_s_attribute", (DL_FUNC) &_polmineR_Rcpp_decode_s_attribute, 3},
    {"_polmineR_Rcpp_get_count_vector", (DL_FUNC) &_polmineR_Rcpp_get_count_vector, 3},
    {"_polmineR_Rcpp_get_region_matrix", (DL_FUNC) &_polmineR_Rcpp_get_region_matrix, 4},
    {"_polmineR_Rcpp_get_cbow_matrix", (DL_FUNC) &_polmineR_Rcpp_get_cbow_matrix, 5},
    {"_polmineR_Rcpp_regions_to_ids", (DL_FUNC) &_polmineR_Rcpp_regions_to_ids, 4},
    {"_polmineR_Rcpp_regions_to_count_matrix", (DL_FUNC) &_polmineR_Rcpp_regions_to_count_matrix, 4},
    {"_polmineR_Rcpp_attribute_size", (DL_FUNC) &_polmineR_Rcpp_attribute_size, 4},
    {"_polmineR_Rcpp_lexicon_size", (DL_FUNC) &_polmineR_Rcpp_lexicon_size, 3},
    {"_polmineR_Rcpp_cpos2struc", (DL_FUNC) &_polmineR_Rcpp_cpos2struc, 4},
    {"_polmineR_Rcpp_cpos2str", (DL_FUNC) &_polmineR_Rcpp_cpos2str, 4},
    {"_polmineR_Rcpp_cpos2id", (DL_FUNC) &_polmineR_Rcpp_cpos2id, 4},
    {"_polmineR_Rcpp_struc2cpos", (DL_FUNC) &_polmineR_Rcpp_struc2cpos, 4},
    {"_polmineR_Rcpp_id2str", (DL_FUNC) &_polmineR_Rcpp_id2str, 4},
    {"_polmineR_Rcpp_struc2str", (DL_FUNC) &_polmineR_Rcpp_struc2str, 4},
    {"_polmineR_Rcpp_regex2id", (DL_FUNC) &_polmineR_Rcpp_regex2id, 4},
    {"_polmineR_Rcpp_str2id", (DL_FUNC) &_polmineR_Rcpp_str2id, 4},
    {"_polmineR_Rcpp_id2freq", (DL_FUNC) &_polmineR_Rcpp_id2freq, 4},
    {"_polmineR_Rcpp_id2cpos", (DL_FUNC) &_polmineR_Rcpp_id2cpos, 4},
    {"_polmineR_Rcpp_cpos2lbound", (DL_FUNC) &_polmineR_Rcpp_cpos2lbound, 4},
    {"_polmineR_Rcpp_cpos2rbound", (DL_FUNC) &_polmineR_Rcpp_cpos2rbound, 4},
    {NULL, NULL, 0}
};

/*
RcppExport void R_init_polmineR_Rcpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
*/

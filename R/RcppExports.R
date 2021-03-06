# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

decode_s_attribute <- function(corpus, s_attribute, registry) {
    .Call('polmineR_Rcpp_decode_s_attribute', PACKAGE = 'polmineR.Rcpp', corpus, s_attribute, registry)
}

get_count_vector <- function(corpus, p_attribute, registry) {
    .Call('polmineR_Rcpp_get_count_vector', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, registry)
}

get_region_matrix <- function(corpus, s_attribute, strucs, registry) {
    .Call('polmineR_Rcpp_get_region_matrix', PACKAGE = 'polmineR.Rcpp', corpus, s_attribute, strucs, registry)
}

get_cbow_matrix <- function(corpus, p_attribute, registry, matrix, window) {
    .Call('polmineR_Rcpp_get_cbow_matrix', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, registry, matrix, window)
}

regions_to_ids <- function(corpus, p_attribute, registry, matrix) {
    .Call('polmineR_Rcpp_regions_to_ids', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, registry, matrix)
}

regions_to_count_matrix <- function(corpus, p_attribute, registry, matrix) {
    .Call('polmineR_Rcpp_regions_to_count_matrix', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, registry, matrix)
}

attribute_size <- function(corpus, attribute, attribute_type, registry) {
    .Call('polmineR_Rcpp_attribute_size', PACKAGE = 'polmineR.Rcpp', corpus, attribute, attribute_type, registry)
}

lexicon_size <- function(corpus, p_attribute, registry) {
    .Call('polmineR_Rcpp_lexicon_size', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, registry)
}

cpos2struc <- function(corpus, p_attribute, cpos, registry) {
    .Call('polmineR_Rcpp_cpos2struc', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, cpos, registry)
}

cpos2str <- function(corpus, p_attribute, registry, cpos) {
    .Call('polmineR_Rcpp_cpos2str', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, registry, cpos)
}

cpos2id <- function(corpus, p_attribute, registry, cpos) {
    .Call('polmineR_Rcpp_cpos2id', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, registry, cpos)
}

struc2cpos <- function(corpus, s_attribute, registry, struc) {
    .Call('polmineR_Rcpp_struc2cpos', PACKAGE = 'polmineR.Rcpp', corpus, s_attribute, registry, struc)
}

id2str <- function(corpus, p_attribute, registry, id) {
    .Call('polmineR_Rcpp_id2str', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, registry, id)
}

struc2str <- function(corpus, s_attribute, struc, registry) {
    .Call('polmineR_Rcpp_struc2str', PACKAGE = 'polmineR.Rcpp', corpus, s_attribute, struc, registry)
}

regex2id <- function(corpus, p_attribute, regex, registry) {
    .Call('polmineR_Rcpp_regex2id', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, regex, registry)
}

str2id <- function(corpus, p_attribute, str, registry) {
    .Call('polmineR_Rcpp_str2id', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, str, registry)
}

id2freq <- function(corpus, p_attribute, id, registry) {
    .Call('polmineR_Rcpp_id2freq', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, id, registry)
}

id2cpos <- function(corpus, p_attribute, id, registry) {
    .Call('polmineR_Rcpp_id2cpos', PACKAGE = 'polmineR.Rcpp', corpus, p_attribute, id, registry)
}

cpos2lbound <- function(corpus, s_attribute, cpos, registry) {
    .Call('polmineR_Rcpp_cpos2lbound', PACKAGE = 'polmineR.Rcpp', corpus, s_attribute, cpos, registry)
}

cpos2rbound <- function(corpus, s_attribute, cpos, registry) {
    .Call('polmineR_Rcpp_cpos2rbound', PACKAGE = 'polmineR.Rcpp', corpus, s_attribute, cpos, registry)
}


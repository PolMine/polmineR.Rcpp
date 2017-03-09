# Rcpp backend for the polmineR backage

The package offers a Rcpp implementation of performance critical operations. Precondition is
the presence of the Corpus Workbench (CWB) on your system, as C++ code is compiled against the corpus library (CL),
a C library that is part of the CWB.

An installation of the CWB is a system requirement for compiling the polmineR.Rcpp package. See the 
[CWB Homepage](http://cwb.sourceforge.net) for instructions how to get and install the CWB.

The easiest way to get pkg-config, glib and pcre installed (required by CWB) is to use package managers
(brew for MacOS, apt-get for Linux). See the INSTALL file included in the CWB source code for detailed
and good explanations.  


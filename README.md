# Rcpp backend for the polmineR backage

The package offers a Rcpp implementation of performance critical operations. Precondition is the presence of the Corpus Workbench (CWB) on your system, as C++ code is compiled against the corpus library (CL), a C library that is part of the CWB.

An installation of the CWB is a system requirement for compiling the polmineR.Rcpp package. See the 
[CWB Homepage](http://cwb.sourceforge.net) for instructions how to get and install the CWB.

## Installation on MacOS, Linux

The easiest way to get pkg-config, glib and pcre installed (required by CWB) is to use package managers (brew for MacOS, apt-get for Linux). See the INSTALL file included in the CWB source code for detailed and good explanations.  

## Installation on Windows

Binaries of the package will be hosted at the PolMine R repository (polmine.sowi.uni-due.de/packages) in due course. For the time being, it is necessary to compile the package:

* Installation of [Rtools](https://cran.r-project.org/bin/windows/Rtools/) is required for compiling on windows.
* The Rtools-directory (usually C:/Rtools) needs to be on the PATH environment variable
* Install the Corpus Worbench (pre-built binaries) on the system (get it [here](https://sourceforge.net/projects/cwb/files/cwb/cwb-3.4-beta/)). The unzipped folder contains an installer script (*.bat-file) that works nicely. Important: Make sure you run the installer with administrator rights.
* Put the bin-subdirectory of the CWB in the Program Files-folder on the PATH (typically "C:\Program Files\CWB\bin").
* Run "R CMD build polmineR.Rcpp" in the folder with the polmineR.Rcpp-folder.
* Run "R CMD INSTALL polmineR.Rcpp_VERSION".


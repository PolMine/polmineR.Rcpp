# Build against libxml2 from Rtools
if (TRUE) {
  dir.create("../inst/libs", showWarnings = FALSE)
  dir.create("../inst/libs/x64", showWarnings = FALSE)
  dir.create("../inst/libs/i386", showWarnings = FALSE)
 
  if(getRversion() < "3.3.0") setInternet2()
 
  
  ## i386 - files ----------------------

  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/i386/libcl.a",
    "../inst/libs/i386/libcl.a", quiet = TRUE,
    method = "curl"
  )
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/i386/libglib-2.0-0.dll", 
    "../inst/libs/i386/libglib-2.0-0.dll", quiet =  TRUE,
    method = "curl"
  )
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/i386/libpcre-0.dll",
    "../inst/libs/i386/libpcre-0.dll", quiet = TRUE,
    method = "curl"
  )
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/i386/libpcre-1.dll", 
    "../inst/libs/i386/libpcre-1.dll", quiet = TRUE,
    method = "curl"
  )
  download.file("http://polmine.sowi.uni-due.de/public/dlls/i386/libpcreposix-0.dll", 
    "../inst/libs/i386/libpcreposix-0.dll", quiet = TRUE,
    method = "curl"
  )


  ## x64 - files -----------------------
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/x86/libglib-2.0-0.dll",
    "../inst/libs/x64/libglib-2.0-0.dll", quiet = TRUE,
    method = "curl"
  )
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/x86/libiconv-2.dll", 
    "../inst/libs/x64/libiconv-2.dll", quiet =  TRUE,
    method = "curl"
  )
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/x86/libintl-8.dll",
    "../inst/libs/x64/libintl.a", quiet = TRUE,
    method = "curl"
  )
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/x86/libpcre-1.dll", 
    "../inst/libs/x64/libpcre.a", quiet = TRUE,
    method = "curl"
  )
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/x86/libpcreposix-0.dll", 
    "../inst/libs/x64/libpcreposix.a", quiet = TRUE,
    method = "curl"
  )
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/x86/libwinpthread-1.dll", 
    "../inst/libs/x64/libwinpthread-1.dll", quiet = TRUE,
    method = "curl"
  )
  download.file(
    "http://polmine.sowi.uni-due.de/public/dlls/x86/libcl.a", 
    "../inst/libs/x64/libcl.a", quiet = TRUE, 
    method = "curl"
  )
}


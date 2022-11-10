.onUnload <- function(libpath) {
  library.dynam.unload(chname = .packageName, libpath = libpath)
}






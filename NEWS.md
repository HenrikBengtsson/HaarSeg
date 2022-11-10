# Version (development version)

## Software Quality

 * Importing `median()` and `pnorm()` from the **stats** package.
 

# Version 0.0.3 [2011-11-19]

## Bug Fixes

 * Package no longer gives a warning (error in R devel) when loaded
   reporting on `Error : .onLoad failed in loadNamespace() for
   'HaarSeg', details: call: library.dynam(pkgname, package = pkgname)
   error: argument "lib.loc" is missing, with no default`.
   
 * When unloading the package, an exception `.onUnload failed in
   unloadNamespace() for 'HaarSeg', details: call:
   library.dynam.unload( libpath = libpath) error: no shared object
   was specified` would be thrown.


# Version 0.0.2 [2009-01-08]

 * CLEANUP: Pruned up the code, e.g. replaced TABs with spaces, etc.


# Version 0.0.1 [2008-12-17]

 *  Created from script and source code available online
    at `http://www.ee.technion.ac.il/Sites/People/YoninaEldar/`.

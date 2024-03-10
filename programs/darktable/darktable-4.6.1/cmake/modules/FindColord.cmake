include(Prebuilt)

include(LibFindMacros)
libfind_pkg_check_modules(Colord colord)
foreach(i ${Colord_LIBRARIES})
  find_library(_colord_LIBRARY NAMES ${i} HINTS ${Colord_LIBRARY_DIRS})
  LIST(APPEND Colord_LIBRARY ${_colord_LIBRARY})
  unset(_colord_LIBRARY CACHE)
endforeach(i)
set(Colord_LIBRARIES ${Colord_LIBRARY})
unset(Colord_LIBRARY CACHE)

if(Colord_FOUND)
  set(Colord ON CACHE BOOL "Build with libcolord support.")
endif(Colord_FOUND)
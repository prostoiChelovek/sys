include(CheckCXXCompilerFlag)

if(NOT DEFINED RAWSPEED_MARCH)
  if(NOT BINARY_PACKAGE_BUILD)
    message(STATUS "Checking for -march=native support")
    CHECK_CXX_COMPILER_FLAG("-march=native" RAWSPEED_MARCHNATIVE)
    if(RAWSPEED_MARCHNATIVE)
      message(STATUS "Checking for -march=native support - works")
      set(RAWSPEED_MARCH "-march=native")
    else()
      message(STATUS "Checking for -mtune=native support")
      CHECK_CXX_COMPILER_FLAG("-mtune=native" RAWSPEED_MTUNENATIVE)
      if(RAWSPEED_MTUNENATIVE)
        message(STATUS "Checking for -mtune=native support - works")
        set(RAWSPEED_MARCH "-mtune=native")
      else()
        message(STATUS "Checking for -mtune=generic support")
        CHECK_CXX_COMPILER_FLAG("-mtune=generic" RAWSPEED_MTUNEGENERIC)
        if(RAWSPEED_MTUNEGENERIC)
          message(STATUS "Checking for -mtune=generic support - works")
          set(RAWSPEED_MARCH "-mtune=generic")
        else()
          message(WARNING "Do not know which -march/-mtune to pass! Resulting binaries may be broken!")
        endif()
      endif()
    endif()
  else()
    message(STATUS "Checking for -mtune=generic support")
    CHECK_CXX_COMPILER_FLAG("-mtune=generic" RAWSPEED_MTUNEGENERIC)
    if(RAWSPEED_MTUNEGENERIC)
      message(STATUS "Checking for -mtune=generic support - works")
      set(RAWSPEED_MARCH "-mtune=generic")
    else()
      message(WARNING "Do not know which -march/-mtune to pass! Resulting binaries may be broken!")
    endif()
  endif()

  set(RAWSPEED_MARCH ${RAWSPEED_MARCH} CACHE INTERNAL "")
endif()

ADD_DEFINITIONS(${RAWSPEED_MARCH})

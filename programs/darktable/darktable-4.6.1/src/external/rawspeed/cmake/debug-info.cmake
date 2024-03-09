include(CheckCompilerFlag)
include(CheckLinkerFlag)

if(RAWSPEED_ENABLE_DEBUG_INFO)
  # always debug info
  add_definitions(-g3)
  add_definitions(-ggdb3)

  check_compiler_flag(CXX -gz COMPILER_SUPPORTS_DEBUG_INFO_COMPRESSION)
  check_linker_flag(CXX -gz COMPILER_SUPPORTS_DEBUG_INFO_COMPRESSION_LINK)
  if(COMPILER_SUPPORTS_DEBUG_INFO_COMPRESSION AND COMPILER_SUPPORTS_DEBUG_INFO_COMPRESSION_LINK)
    add_compile_options(-gz)
    add_link_options(-gz)
  endif()

  if(NOT (WIN32 AND CMAKE_COMPILER_IS_GNUCXX))
    check_compiler_flag(CXX -gsplit-dwarf COMPILER_SUPPORTS_SPLIT_DEBUG_INFO)
    if(COMPILER_SUPPORTS_SPLIT_DEBUG_INFO)
      add_compile_options(-gsplit-dwarf)
    endif()

    check_linker_flag(CXX -Wl,--gdb-index LINKER_SUPPORTS_GDB_INDEX)
    if(LINKER_SUPPORTS_GDB_INDEX)
      add_link_options(-Wl,--gdb-index)
    endif()
  endif()
elseif(NOT RAWSPEED_ENABLE_DEBUG_INFO)
  add_definitions(-g0)
else()
  message(SEND_ERROR "RAWSPEED_ENABLE_DEBUG_INFO has unknown value: \"${RAWSPEED_ENABLE_DEBUG_INFO}\"")
endif()

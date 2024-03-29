set(rsidentify "rs-identify")
if(DEFINED RAWSPEED_BINARY_PREFIX)
  set(rsidentify "${RAWSPEED_BINARY_PREFIX}-${rsidentify}")
endif()

rawspeed_add_executable(${rsidentify} rawspeed-identify.cpp)
target_compile_definitions(${rsidentify}
  PRIVATE -DRS_CAMERAS_XML_PATH="${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_DATAROOTDIR}/rawspeed/cameras.xml"
)

target_link_libraries(${rsidentify} rawspeed)

target_link_libraries(${rsidentify} rawspeed_get_number_of_processor_cores)

if(BUILD_TESTING)
  rawspeed_add_test(NAME utilities/${rsidentify} COMMAND ${rsidentify}
                    WORKING_DIRECTORY "$<TARGET_PROPERTY:rawspeed_get_number_of_processor_cores,BINARY_DIR>")
  set_tests_properties(utilities/${rsidentify} PROPERTIES LABELS "dummy")
endif()

install(TARGETS ${rsidentify} DESTINATION ${CMAKE_INSTALL_BINDIR})

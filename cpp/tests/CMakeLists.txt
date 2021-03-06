include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/..
  ${CMAKE_CURRENT_BINARY_DIR}/..
  ${PROJECT_SOURCE_DIR}/utils
)

macro(CPP_ADD_SIMPLETEST exe)
  string(REPLACE "-" "" test_name ${exe})
  set(${test_name}_SOURCES
    ${ARGN}
  )
  poppler_add_test(${exe} BUILD_CPP_TESTS ${${test_name}_SOURCES})
  target_link_libraries(${exe} poppler-cpp poppler)
  if(MSVC)
    target_link_libraries(${exe} poppler ${poppler_LIBS})
  endif()
endmacro(CPP_ADD_SIMPLETEST)

cpp_add_simpletest(poppler-dump poppler-dump.cpp ${PROJECT_SOURCE_DIR}/utils/parseargs.cc)
cpp_add_simpletest(poppler-render poppler-render.cpp ${PROJECT_SOURCE_DIR}/utils/parseargs.cc)

if(ENABLE_FUZZER)
  cpp_add_simpletest(pdf_fuzzer pdf_fuzzer.cc)
endif()

find_package(Qt6 COMPONENTS Quick REQUIRED)
set(CMAKE_AUTOMOC ON)
add_executable(helloQml qtMain.cpp)
target_link_libraries(
  helloQml
  project_warnings
  project_options
  Qt6::Quick)
target_compile_features(helloQml PUBLIC cxx_nullptr cxx_lambdas)

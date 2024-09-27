cmake_minimum_required(VERSION 3.10)
project(l1)

include_directories(include)

add_executable(main_l1 l1.cpp)
target_compile_definitions(main_l1 PRIVATE L1_MAIN)

add_executable(test_l1 test.cpp)
target_sources(test_l1 PRIVATE l1.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

target_sources(test_l1 PRIVATE l1.cpp) 

target_link_libraries(
  test_l1
  GTest::gtest_main
)


include(GoogleTest)

add_test(NAME test_l1 COMMAND test_l1)
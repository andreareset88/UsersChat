cmake_minimum_required(VERSION 3.15)

add_subdirectory(./lib/googletest-master)
set(gtest_SOURCE_DIR, ./lib/googletest-master/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp TestChat.cpp TestMessage.cpp TestNotifier.cpp TestUser.cpp)
add_executable(runUsersChatTests ${TEST_SOURCE_FILES})
target_link_libraries(runUsersChatTests gtest gtest_main core)

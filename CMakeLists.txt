cmake_minimum_required(VERSION 3.15)
project(UsersChat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(test)
set(SOURCE_FILES main.cpp Chat.h Notifier.h Message.h Observer.h Subject.h User.h)
add_executable(UsersChat main.cpp)


add_library(core ${SOURCE_FILES})
target_link_libraries(UsersChat core)

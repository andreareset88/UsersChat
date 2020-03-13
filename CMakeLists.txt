cmake_minimum_required(VERSION 3.15)
project(UsersChat)

set(CMAKE_CXX_STANDARD 14)

add_executable(UsersChat main.cpp User.h Chat.h header.h Message.h Observer.h Subject.h Notifier.h)
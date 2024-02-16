cmake_minimum_required(VERSION 3.5)

project(CodingTasks_Classes_Homework LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(CodingTasks_Classes_Homework main.cpp
    Book.h Book.cpp)

include(GNUInstallDirs)
install(TARGETS CodingTasks_Classes_Homework
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

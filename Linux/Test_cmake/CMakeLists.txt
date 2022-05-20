# Hello!

cmake_minimum_required(VERSION 3.18.4 FATAL_ERROR)

set(project_name Test_cmake)
project(${project_name})

add_executable (${project_name} 
	src/main.cpp)
	
target_compile_features(${project_name} PUBLIC cxx_std_17)



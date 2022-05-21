cmake_minimum_required(VERSION 3.10)

# set the project name
project(Tutorial)

# add the executable 
add_executable(Tutorial tutorial.cxx)

mkdir Step1_build
cd Step1_build 
cmake ../Step1

cmake --build .

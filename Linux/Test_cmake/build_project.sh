#!/bin/bash

# There is a directory source with all cpp-files
# There is a CMakeFiles.txt

mkdir build
cd build
cmake -G "Unix Makefiles" ..
cmake --build . --config Release --target ${project_name}

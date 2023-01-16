mkdir build
cd build
cmake -G "MinGW Makefiles" ..
cmake --build . --config Release --target ${project_name}

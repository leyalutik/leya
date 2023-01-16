CXX = g++
CXXFLAGS = -ggdb -Wall -static -static-libgcc -static-libstdc++ -pthread -std=c++20
SOURCE=main.cpp
GOAL=work
##GOAL=$(SOURCE:.cpp=$*)

all: run 

run : $(GOAL)
	./$(GOAL)

$(GOAL) : $(SOURCE)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean : 
	rm -f *.o


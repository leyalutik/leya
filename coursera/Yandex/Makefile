CXX = g++
CXXFLAGS = -ggdb -Wall -pthread -std=c++17
SOURCE=main.cpp
GOAL=$(SOURCE:.cpp=$*)

all: run 

run : $(GOAL)
	./$(GOAL)

$(GOAL) : $(SOURCE)
	$(CXX) $(CXXFLAGS) $< -o $@

clean : 
	rm -f *.o


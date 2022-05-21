CXX = g++
CXXFLAGS = -ggdb -Wall -pthread -std=c++17
SRC=main.cpp
GOAL=$(SRC:.cpp=$*)

all: run 

run : $(GOAL)
	./$(GOAL)

$(GOAL) : $(SRC)
	$(CXX) $(CXXFLAGS) $< -o $@

clean : 
	rm -f *.o


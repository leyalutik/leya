CXX = g++
CXXFLAGS = -ggdb -Wall -pthread -std=c++17
SOURCE=main.cpp
GOAL=$(SOURCE:.cpp=$*)
MODULES=emotions.cpp parse_line.cpp tests.cpp
OBJMODULES=$(MODULES:.cpp=.o)
	
GOAL=$(SOURCE:.cpp=$*)

all: run  

run : $(GOAL)
	./$(GOAL)

.o:.cpp .h
	$(CXX) $(CXXFLAGS) -c $<  

$(GOAL) : $(SOURCE) $(OBJMODULES)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean : 
	rm -f *.o *






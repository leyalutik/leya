CXX = g++
CXXFLAGS = -ggdb -Wall -static -static-libgcc -static-libstdc++ -pthread -std=c++20
SOURCE=main.cpp
GOAL=Dynamicheskoechtenie
##GOAL=$(SOURCE:.cpp=$*)
MODULES=parse_file.cpp lessons.cpp bricks.cpp
OBJMODULES=$(MODULES:.cpp=.o)

all: run clean

run : $(GOAL)
	./$(GOAL)

.o:.cpp .h
	$(CXX) $(CXXFLAGS) -c $<

$(GOAL) : $(SOURCE) $(OBJMODULES)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	rm -f *.o 

CXX = g++
CXXFLAGS = -ggdb -Wall -pthread -std=c++20
SOURCE=main.cpp
GOAL=Hello1
##GOAL=$(SOURCE:.cpp=$*)
##MODULES=template_work.cpp
OBJMODULES=$(MODULES:.cpp=.o)

all: run

run : $(GOAL)
	./$(GOAL)

.o:.cpp .h
	$(CXX) $(CXXFLAGS) -c $<

$(GOAL) : $(SOURCE) $(OBJMODULES)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	rm -f *.o *

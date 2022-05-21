CXX = g++
CXXFLAGS = -ggdb -Wall -pthread -std=c++17
CXXFLAGSCONIO = -ggdb -Wall -pthread -lstdc++ -std=c++17
SRC=main.cpp
GOAL=$(SRC:.cpp=$*)
SOURCES_FILES = main_menu_start.cpp
OBJECT_FILES = $(SOURCES_FILES:.cpp=.o)

all: run 

run : $(GOAL)
	./$(GOAL)

$(GOAL) : $(SRC) $(OBJECT_FILES)
	$(CXX) $(CXXFLAGS) $^ -o $@
$(OBJECT_FILES): $(SOURCES_FILES)
	$(CXX) -c $(CXXFLAGS) $^ -o $@

clean : 
	rm -f *.o


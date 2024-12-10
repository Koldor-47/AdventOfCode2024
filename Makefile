# Complier
CXX = g++

CXXFLAGS= -std=c++20 -Werror -Wall -Wextra

SRC = main.cpp utils/utils.cpp Day_one/dayOne.cpp Day_one/Part_b.cpp
OBJ = $(SRC:.cpp=.o)

#Executable target
TARGET = aoc24



# Default Target
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
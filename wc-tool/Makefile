# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Source files
SRC = main.cpp wc.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = ccwc

# Default rule
all: $(TARGET)

# Link object files into the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJ) $(TARGET)


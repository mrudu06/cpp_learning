# Compiler and compiler flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g

# Target executable name
TARGET = listex

# Source and object files
SRCS = main.cpp linkedlist.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile source files to object files (they all depend on linkedlist.h)
%.o: %.cpp linkedlist.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to remove compiled binaries and object files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean

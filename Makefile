# Compilers
CC = gcc
CXX = g++

# Compiler flags
# -Ilinkedlist and -Iqueue allow the compiler to find the headers automatically
CFLAGS = -Wall -Wextra -g
CXXFLAGS = -Wall -Wextra -std=c++17 -g -Ilinkedlist -Iqueue

# Target name
TARGET = queue_ll_prog

# Default target
all: $(TARGET)

# 1. Compile the C linked list into an object file (.o)
linkedlist/linkedlist.o: linkedlist/linkedlist.c linkedlist/linkedlist.h
	$(CXX) $(CXXFLAGS) -c -o linkedlist/linkedlist.o linkedlist/linkedlist.c

# 2. Compile and link your C++ queue program with the linked list object
$(TARGET): queue/main_queue.cpp linkedlist/linkedlist.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) queue/main_queue.cpp linkedlist/linkedlist.o

# Clean target to remove compiled files
clean:
	rm -f $(TARGET) linkedlist/linkedlist.o

.PHONY: all clean

# Compilers
CC = gcc
CXX = g++

# Compiler flags
CFLAGS = -Wall -Wextra -g
CXXFLAGS = -Wall -Wextra -std=c++17 -g

# Target names
LINKEDLIST_TARGET = linkedlist_prog
QUEUE_TARGET = queue_prog

# Default target builds both programs
all: $(LINKEDLIST_TARGET) $(QUEUE_TARGET)

# Build linkedlist program (C)
$(LINKEDLIST_TARGET): linkedlist/main.c linkedlist/linkedlist.c linkedlist/linkedlist.h
	$(CC) $(CFLAGS) -o $(LINKEDLIST_TARGET) linkedlist/main.c linkedlist/linkedlist.c

# Build queue program (C++)
$(QUEUE_TARGET): queue/main.cpp queue/queue.cpp queue/queue.h
	$(CXX) $(CXXFLAGS) -o $(QUEUE_TARGET) queue/main.cpp queue/queue.cpp

# Clean target to remove compiled executables
clean:
	rm -f $(LINKEDLIST_TARGET) $(QUEUE_TARGET)

.PHONY: all clean

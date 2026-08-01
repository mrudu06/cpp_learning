# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Target executable name
TARGET = main

# Source and object files
SRCS = main.c linkedlist.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compile source files to object files (they all depend on linkedlist.h)
%.o: %.c linkedlist.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target to remove compiled binaries and object files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean

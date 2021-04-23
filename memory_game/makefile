#
# This is an example Makefile for Memory Game  project.  This
# Typing 'make' or 'make run' will create the executable file.
#

# define some Makefile variables for the compiler and compiler flags
# to use Makefile variables later in the Makefile: $()
#
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
# for C++ define  CC = g++
CC = g++
#CFLAGS  = -g -Wall

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#
all: run

# To create the executable file run we need the object files
run:  MemoryGameClient.o MemoryGame.o 
	$(CC) -o memory MemoryGameClient.o MemoryGame.o

# To create the object file MemoryGameClient.o, 
# we need source MemoryGameClient.cpp 
MemoryGameClient.o:  MemoryGameClient.cpp
	$(CC) -c MemoryGameClient.cpp

# To create the object file MemoryGame.o, we need source
# files MemoryGame.cpp
#
MemoryGame.o:  MemoryGame.cpp
	$(CC) -c MemoryGame.cpp


clean: 
	$(RM) memory *.o *~

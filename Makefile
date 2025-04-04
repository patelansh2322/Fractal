CC = g++
CFLAGS = --std=c++17 -Wall -Werror -pedantic -g
LIB = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lboost_unit_test_framework
INCLUDEDIR = -I/opt/homebrew/Cellar/boost/1.87.0/include/ -I/opt/homebrew/Cellar/sfml@2/2.6.2/include/
LIBDIR = -L/opt/homebrew/Cellar/boost/1.87.0/lib/ -L/opt/homebrew/Cellar/sfml@2/2.6.2/lib/
DEPS = triangle.hpp
# Your compiled .o files
OBJECTS = triangle.o
# The name of your program
PROGRAM = Triangle

.PHONY: all clean lint


all: $(PROGRAM)

# Wildcard recipe to make .o files from corresponding .cpp file
%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $< $(INCLUDEDIR)

$(PROGRAM): main.o $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBDIR) $(LIB)

clean:
	rm *.o $(PROGRAM)

lint:
	cpplint *.cpp *.hpp

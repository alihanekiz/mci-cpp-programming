all: shape

shape: main.o Position.o Shape.o Rectangle.o 
	g++ -Wall -Werror -o shape main.o Shape.o Rectangle.o Position.o

Shape.o: Shape.cpp Shape.hpp
	g++ -Wall -Werror -o Shape.o Shape.cpp

Rectangle.o: Rectangle.cpp Rectangle.hpp
	g++ -Wall -Werror -o Rectangle.o Rectangle.cpp

Position.o: Position.cpp Position.hpp
	g++ -Wall -Werror -o Position.o Position.cpp

main.o: main.cpp
	g++ -Wall -Werror -o main.o main.cpp

clean:
	rm -rf shape main.o Shape.o Rectangle.o Position.o
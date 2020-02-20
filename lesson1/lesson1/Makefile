all: proto

proto: main.o gegenstand.o heldin.o character.o
	g++ -Wall -Werror -o proto main.o gegenstand.o heldin.o character.o

gegenstand.o: gegenstand.cpp gegenstand.hpp
	g++ -Wall -Werror -c -o gegenstand.o gegenstand.cpp

heldin.o: heldin.cpp heldin.hpp
	g++ -Wall -Werror -c -o heldin.o heldin.cpp

main.o: main.cpp main.hpp
	g++ -Wall -Werror -c -o main.o main.cpp

clean: 
	rm -rf proto main.o heldin.o gegenstand.o

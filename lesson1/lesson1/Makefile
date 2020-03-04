all: proto

proto: main.o gegenstand.o heldin.o character.o npc.o zauberer.o ritter.o
	g++ -Wall -Werror -o proto main.o gegenstand.o heldin.o character.o npc.o zauberer.o ritter.o

gegenstand.o: gegenstand.cpp gegenstand.hpp
	g++ -Wall -Werror -c -o gegenstand.o gegenstand.cpp

heldin.o: heldin.cpp heldin.hpp
	g++ -Wall -Werror -c -o heldin.o heldin.cpp

npc.o: npc.cpp npc.hpp
	g++ -Wall -Werror -c -o npc.o npc.cpp

character.o: character.cpp character.hpp
	g++ -Wall -Werror -c -o character.o character.cpp

ritter.o: ritter.cpp ritter.hpp
	g++ -Wall -Werror -c -o ritter.o ritter.cpp

zauberer.o: zauberer.cpp zauberer.hpp
	g++ -Wall -Werror -c -o zauberer.o zauberer.cpp

main.o: main.cpp main.hpp
	g++ -Wall -Werror -c -o main.o main.cpp

clean: 
	rm -rf proto main.o character.o heldin.o gegenstand.o zauberer.o npc.o ritter.o

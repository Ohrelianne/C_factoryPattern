all: main.o kebab.o clubsandwich.o chef.o sandwichmaker.o
	g++ -o main main.o kebab.o clubsandwich.o chef.o sandwichmaker.o

main.o : chef.h main.cpp 
	g++ -c main.cpp -Wall

chef.o : chef.h clubsandwich.h sandwichmaker.h kebab.h chef.cpp 
	g++ -c chef.cpp -Wall

clubsandwich.o : clubsandwich.h sandwich.h clubsandwich.cpp
	g++ -c clubsandwich.cpp -Wall

kebab.o : kebab.h sandwich.h kebab.cpp
	g++ -c kebab.cpp -Wall

sandwichmaker.o : sandwichmaker.h kebab.h clubsandwich.h sandwichmaker.cpp
	g++ -c sandwichmaker.cpp -Wall

clean:
	rm -rf *.o main
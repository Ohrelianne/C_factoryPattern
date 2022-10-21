all: main.o kebab.o
	g++ -o main main.o kebab.o 
main.o : main.cpp
	g++ -c main.cpp -Wall
chef.o : chef.cpp chef.h kebabmaker.h clubsandwichmaker.h clubsandwich.h kebab.h chef.cpp
	g++ -c chef.cpp -Wall
kebabmaker.o : sandwichmaker.h kebabmaker.h kebab.h sandwich.h kebabmaker.cpp
	g++ -c -Wall kebabmaker.cpp
clubsandwichmaker.o : sandwichmaker.h clubsandwichmaker.h clubsandwich.h sandwich.h clubsandwichmaker.cpp
	g++ -c -Wall clubsandwichmaker.cpp
clubsandwich.o : clubsandwich.h sandwich.h clubsandwich.cpp
	g++ -c -Wall clubsandwich.cpp
kebab.o : kebab.h sandwich.h kebab.cpp
	g++ -c -Wall kebab.cpp
clean:
	rm -rf *.o main
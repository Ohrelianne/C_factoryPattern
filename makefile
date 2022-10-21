main : main.o chef.o
	g++ -o main main.o chef.o -Wall
main.o : main.cpp
	g++ -c main.cpp -Wall
chef.o : chef.cpp chef.h
	g++ -c tree.cpp -Wall
kebabmaker.o : sandwichmaker.h kebabmaker.h kebabmaker.cpp
	g++ -c -Wall kebabmaker.cpp
clubsandwichmaker.o : sandwichmaker.h clubsandwich.h clubsandwichmaker.cpp
	g++ -c -Wall clubsandwichmaker.cpp
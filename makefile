main : main.o chef.o
	g++ -o main main.o chef.o -Wall
main.o : main.cpp
	g++ -c main.cpp -Wall
chef.o : chef.cpp chef.h kebabmaker.h clubsandwichmaker.h ClubSandwich.h Kebab.h
	g++ -c chef.cpp -Wall
kebabmaker.o : sandwichmaker.h kebabmaker.h kebabmaker.cpp kebab.h
	g++ -c -Wall kebabmaker.cpp
clubsandwichmaker.o : sandwichmaker.h clubsandwichmaker.h clubsandwichmaker.cpp clubsandwich.h
	g++ -c -Wall clubsandwichmaker.cpp
ClubSandwich.o : ClubSandwich.h Sandwich.h
	g++ -c -Wall ClubSandwich.cpp
Kebab.o : Kebab.h Sandwich.h
	g++ -c -Wall Kebab.cpp
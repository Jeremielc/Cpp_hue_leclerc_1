all : Ex1 Ex2 Ex4 Ex5 run
	
	
Ex1 :
	@g++ -c src/Ex1.cpp -W -Wall -ansi -pedantic -o obj/Ex1.o
	@g++ obj/Ex1.o -o bin/tp1_ex1
	
Ex2 : 
	@g++ -c src/Ex2.cpp -W -Wall -ansi -pedantic -o obj/Ex2.o
	@g++ obj/Ex2.o -o bin/tp1_ex2
	
Ex4 :
	@g++ -c src/Ex4.cpp -W -Wall -ansi -pedantic -o obj/Ex4.o
	@g++ obj/Ex4.o -o bin/tp1_ex4
	
Ex5 : 
	@g++ -c src/Ex5.cpp -W -Wall -ansi -pedantic -o obj/Ex5.o
	@g++ obj/Ex5.o -o bin/tp1_ex5
	
run :
	@echo "########## Exercice 1 ##########"
	@bin/tp1_ex1
	@echo ""
	
	@echo "########## Exercice 2 ##########"
	@bin/tp1_ex2
	@echo ""
	
	@echo "########## Exercice 4 ##########"
	@bin/tp1_ex4
	@echo ""
	
	@echo "########## Exercice 5 ##########"
	@bin/tp1_ex5
	@echo ""

clear :
	@rm -rf obj/*.o bin/*

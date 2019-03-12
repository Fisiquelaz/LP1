.DEFAULT_GOAL = calculadora

div.o: div.cpp div.h
	g++ div.cpp -c
mult.o: mult.cpp mult.h
	g++ mult.cpp -c
soma.o: soma.cpp soma.h
	g++ soma.cpp -c
sub.o: sub.cpp sub.h
	g++ sub.cpp -c
menu.o: menu.cpp menu.h
	g++ menu.cpp -c
calculadora: calculadora.cpp div.o mult.o soma.o sub.o menu.o
	g++ calculadora.cpp div.o mult.o soma.o sub.o menu.o -o calculadora

clear: 
	rm *.o
	rm calculadora

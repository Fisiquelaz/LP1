#include "menu.h"
#include <iostream>

int menu(){
	int x;
	std::cout << "Escolha a opção desejada:" << std::endl;
	std::cout << "1 - Soma" << std::endl;
	std::cout << "2 - Subtração" << std::endl;
	std::cout << "3 - Multiplicação" << std::endl;
	std::cout << "4 - Divisão" << std::endl;
	std::cout << "0 - Parar" << std::endl;
	std::cin >> x;
	return x;
}

void receber_variaveis(float *a, float *b){
	std::cout << "Digite o primeiro número" << std::endl;
	std::cin >> *a;
	std::cout << "Digite o segundo número" << std::endl;
	std::cin >> *b;
}

void sair(){
	std::cout << "Até logo" << std::endl;
}

void erro(){
	std::cout << "Opção inválida" << std::endl;
}

void print_resultado(float c){
	std::cout << "Resultado:" << c << std::endl;
}
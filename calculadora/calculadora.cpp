#include "menu.h"
#include "sub.h"
#include "soma.h"
#include "mult.h"
#include "div.h"
int main(){
	int z = 1;
	float a, b;
	while(z != 0){
		z = menu();
		switch(z){
			case 1:
				receber_variaveis(&a, &b);
				print_resultado(soma(a, b));
				break;
			case 2:
				receber_variaveis(&a, &b);
				print_resultado(subtracao(a, b));
				break;
			case 3:
				receber_variaveis(&a, &b);
				print_resultado(multiplicacao(a, b));
				break;
			case 4:
				receber_variaveis(&a, &b);
				print_resultado(divisao(a, b));
				break;
			case 0:
				sair();
			default:
				erro();
				break;
		}
	}
	return 0;
}
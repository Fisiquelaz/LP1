#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <string>

class Produto{
	private:
		int id;
		string nome;
		int codigo;
		int quantidade_estoque; //quantidade no estoque para avisar quando estiver acabando
		float valor;
}

#endif
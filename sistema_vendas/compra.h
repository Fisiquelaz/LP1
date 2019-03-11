#ifndef _COMPRA_H_
#define _COMPRA_H_

#include <string>
#include <list>

class Compra{
	private:
		typedef struct Produto{
			int id; // id que vai se relacionar com a tabela produto
			int quantidade; // quantidade de produtos daquele tipo selecionado (não confundir com quantidade_estoque)
		} produto;
		typedef struct Parcela{
			int id;
			float valor;
			string data_vencimento;
			bool paga;
		} parcela;
		int id;
		float total_compra;
		list<produto> produtos; //lista de produtos
		list<parcela> parcelas; //lista de parcelas
		int distribuidor_id; //id do distribuidor que fez a venda
}

#endif
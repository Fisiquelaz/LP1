#ifndef _VENDA_H_
#define _VENDA_H_

#include <string>
#include <list>

class Venda{
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
		float total_venda;
		list<produto> produtos; //lista de produtos
		list<parcela> parcelas; //lista de parcelas
		int cliente_id; //id do cliente que fez a compra
}

#endif
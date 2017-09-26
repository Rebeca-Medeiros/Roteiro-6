#include "MesaDeRestaurante.h"
#include <iostream>

using namespace std;

Pedido MesaDeRestaurante::getPedido(){
	return pedidos[num];
}

int MesaDeRestaurante::getNum(){
	return num;
}

MesaDeRestaurante::MesaDeRestaurante(int num, double valortotal){
	num = 0;
	valortotal = 0.0;
}

void MesaDeRestaurante::adicionarAoPedido(Pedido p){
	pedidos[numpedidos] = p;
	valortotal += p.getPreco();
	num++;
}

void MesaDeRestaurante::zeraPedidos(){
	int i;

	for(i = 0; i < num; i++){
		pedidos[i].setQuantidade(0);
	}

	valortotal = 0.0;
}

double MesaDeRestaurante::calculaTotal(){
	return valortotal;
}


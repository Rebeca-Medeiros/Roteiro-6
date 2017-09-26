#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include <iostream>

using namespace std;

RestauranteCaseiro::RestauranteCaseiro(){

}


void RestauranteCaseiro::adicionarAoPedido(){
	int numero;
	mesas[numero].adicionAoPedido(p);
}

void RestauranteCaseiro::calculaTotalRestaurante(){
	double total = 0.0;
	int i;

	for(i = 0; i < MAX; i++){
		total += mesas[i].calculaTotal();
		cout << total << endl;
	}
}

#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
#include <iostream>

using namespace std;

int main(){
	int opcao;
	RestauranteCaseiro restaurante;

	restaurante.adicionarAoPedido(Pedido(1, 2,"Bolo de cenoura", 3.50));
	restaurante.adicionarAoPedido(Pedido(2, 1,"Suco de acelora", 4.50));
	
	cout << "1 - Lista de pedidos" << endl;
	cout << "2 - Zerar" << endl;
	cout << "3 - Total mesas" << endl;
	cout << "4 - Total do restaurante" << endl;

	cout << "Escolha uma opcao: " << endl;
	cin >> opcao;

	switch(opcao){
		case 1:
			cout << "" << restaurante.getMesas(1).getPedido();
			break;
		case 2:
			restaurante.getMesas(1).zeraPedidos();
			restaurante.getMesas(2).zeraPedidos();
			break;
		case 3:
			cout << "Total da mesa: " << restaurante.calculaTotal() << endl;
			break;

		case 4:
			cout << "Total do restaurante: " << restaurante.calculaTotalRestaurante() << endl;
			break;
		default:
			break;
	}

  return 0;
}

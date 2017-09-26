#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"
#define MAX 20

class MesaDeRestaurante{
    private:
        Pedido pedidos[MAX];
        int num;
	double valortotal;
    public:
        MesaDeRestaurante(int num, double valortotal);
        void adicionarAoPedido();
        void zeraPedidos();
        double calculaTotal();

	Pedido getPedido();
	int getNum();
};



#endif // MESADERESTAURANTE_H

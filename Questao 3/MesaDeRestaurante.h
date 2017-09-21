#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"

class MesaDeRestaurante{
    private:
        Pedido *pedidos[];
    public:
        MesaDeRestaurante();
        void adicionAoPedido();
        void zeraPedidos();
        void calculaTotal();
};



#endif // MESADERESTAURANTE_H

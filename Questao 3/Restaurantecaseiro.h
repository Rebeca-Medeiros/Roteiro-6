#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_h

#include "MesaDeRestaurante.h"

class RestauranteCaseiro{
    private:
        MesaDeRestaurante *mesa[];
    public:
        void adicionaAoPedido();
        void calculaTotalRestaurante();
};

#endif // RESTAURANTECASEIRO_H

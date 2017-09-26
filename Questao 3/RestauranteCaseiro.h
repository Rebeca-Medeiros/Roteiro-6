#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_h

#include "MesaDeRestaurante.h"
#define MAX 20

class RestauranteCaseiro{
    private:
        MesaDeRestaurante mesa[MAX];
    public:
	RestauranteCaseiro();        
	void adicionarAoPedido();
        void calculaTotalRestaurante();

	MesaDeRestaurante getMesas(int l){
		return mesa[l];
	}

};

#endif // RESTAURANTECASEIRO_H

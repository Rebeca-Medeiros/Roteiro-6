#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>

class Pedido{
    private:
        int numero;
        int quantidade;
        std::string descricao;
        double preco;
    public:
        Pedido(int numero, int quantidade, std::string descricao, double preco);

};

#endif // PEDIDO_H

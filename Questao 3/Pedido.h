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
        void setNumero(int n);
        int getNumero();

        void setQuantidade(int q);
        int getQuantidade();

        void setDescricao(std::string d);
        std::string getDescricao();

        void setPreco(double p);
        double getPreco();
};

#endif // PEDIDO_H

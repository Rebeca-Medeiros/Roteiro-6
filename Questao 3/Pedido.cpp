#include "Pedido.h"
#include <iostream>

using namespace std;

Pedido::Pedido(int numero, int quantidade, std::string descricao, double preco){
    this->numero = numero;
    this->quantidade = quantidade;
    this->descricao = descricao;
    this->preco = preco;
}

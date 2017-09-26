#include "Pedido.h"
#include <iostream>

using namespace std;

Pedido::Pedido(int numero, int quantidade, std::string descricao, double preco){
    this->numero = numero;
    this->quantidade = quantidade;
    this->descricao = descricao;
    this->preco = preco;
}

void Pedido::setNumero(int n){
  numero = n;
}

int Pedido::getNumero(){
  return numero;
}

void Pedido::setQuantidade(int q){
  quantidade = q;
}

int Pedido::getQuantidade(){
  return quantidade;
}

void Pedido::setDescricao(string d){
  descricao = d;
}

string Pedido::getDescricao(){
  return descricao;
}

void Pedido::setPreco(double p){
  preco = p;
}

double Pedido::getPreco(){
  return preco;
}

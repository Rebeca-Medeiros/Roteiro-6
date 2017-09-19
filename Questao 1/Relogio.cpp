#include "Relogio.h"
#include <iostream>

using namespace std;

Relogio::Relogio(int hora, int minuto, int segundo){
	if(hora > 24 || hora < 0){
		cout << "Hora invalida" << endl;
	}

	if(minuto > 60 || minuto < 0){
		cout << "Minuto invalido" << endl;
	}

	if(segundo > 60 || segundo < 0){
        cout << "Segundo invalido" << endl;
	}
}

void Relogio::setHorario(int h, int m, int s){
    hora = h;
    minuto = m;
    segundo = s;
}

int Relogio::getHora(){
    return hora;
}

int Relogio::getMinuto(){
    return minuto;
}

int Relogio::getSegundo(){
    return segundo;
}

void Relogio::avancarHorario(int hora, int minuto, int segundo){

    if(segundo == 60){
        segundo = 00;
        minuto++;
        cout << "Novo horario: " << hora << ":" << minuto << ":" << segundo << endl;
    } else {
        segundo++;
        cout << "Novo horario: " << hora << ":" << minuto << ":" << segundo << endl;
    }

     if(segundo == 60 && minuto == 60){
        segundo = 00;
        minuto = 00;
        hora++;
        cout << "Novo horario: " << hora << ":" << minuto << ":" << segundo << endl;
    }

}


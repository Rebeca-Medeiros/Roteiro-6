#include "Televisao.h"
#include <iostream>

using namespace std;

Televisao::Televisao(int volume, int canal){
        if(volume > 100 || volume < 0){
            cout << "Volume invalido" << endl;
        }

        if(canal > 15 || canal < 0){
            cout << "Canal invalido" << endl;
        }
}

void Televisao::setVolume(int v){
    volume = v;
}

void Televisao::setCanal(int c){
    canal = c;
}

int Televisao::getVolume(){
    return volume;
}

int Televisao::getCanal(){
    return canal;
}

void Televisao::alteraVolume(int volume){
    int op;

    cout << " 1 - Aumentar volume" << endl << "2 - Diminuir volume" << endl;
    cin >> op;

    switch(op){
        case 1:
            volume++;
            cout << "Novo volume: " << volume << endl;
            break;
        case 2:
            volume--;
            cout << "Novo volume: " << volume << endl;
            break;
        default:
            cout << "Invalido" << endl;
            break;
    }

}

void Televisao::alteraCanal(int canal){
    int op;

    cout << " 1 - Aumentar canal" << endl << "2 - Diminuir canal" << endl;
    cin >> op;

    switch(op){
        case 1:
            canal++;
            cout << "Novo canal: " << canal << endl;
            break;
        case 2:
            canal--;
            cout << "Novo canal: " << canal << endl;
            break;
        default:
            cout << "Invalido" << endl;
            break;
    }
}

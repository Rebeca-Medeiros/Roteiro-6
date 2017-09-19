#include "Televisao.h"
#include <iostream>

using namespace std;

int main(){
    Televisao t1 = Televisao(50, 12);

    int vol, can;

    cout << "Digite o volume: " << endl;
    cin >> vol;

    cout << "Digite o canal: " << endl;
    cin >> can;


    t1.setVolume(vol);
    t1.setCanal(can);

    cout << "Volume: " << t1.getVolume() << "| Canal: " << t1.getCanal() << endl;

    t1.alteraVolume(t1.getVolume());
    t1.alteraCanal(t1.getCanal());

    return 0;
}

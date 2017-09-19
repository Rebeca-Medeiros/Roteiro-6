#include <iostream>
#include "Relogio.h"

using namespace std;

int main(){
    Relogio r1 = Relogio(12, 45, 54);

    r1.setHorario(12, 54, 60);

    cout << "Hora: " << r1.getHora() << ":" << r1.getMinuto() << ":" << r1.getSegundo() << endl;

    r1.avancarHorario(r1.getHora(), r1.getMinuto(), r1.getSegundo());

    return 0;
}

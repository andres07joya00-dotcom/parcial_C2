#include "DispositivoInteligente.h"

int main() {
    DispositivoInteligente ob1("Lámpara ", 0.05);
    ob1.desbloquearControlRemoto();
    ob1.encender();
    cout << ob1.nomb() << "consume " << ob1.obtenerConsumoEnergia(10) << " kWh" << endl;
    ob1.bloquearControlRemoto();
    ob1.apagar();
    ob1.desbloquearControlRemoto();
    ob1.apagar();
    return 0;
}

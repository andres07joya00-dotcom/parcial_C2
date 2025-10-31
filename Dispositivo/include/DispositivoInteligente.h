#ifndef DISPOSITIVO_INTELIGENTE_H
#define DISPOSITIVO_INTELIGENTE_H

#include <iostream>
#include <string>
using namespace std;

class DispositivoInteligente {
private:
    string nombre;
    bool estado;
    bool bloqueado;
    float consumoEnergia;

public:
    DispositivoInteligente(string nom, float consumo);

    string nomb();
    void encender();
    void apagar();
    float obtenerConsumoEnergia(float horas);
    void bloquearControlRemoto();
    void desbloquearControlRemoto();
};

#endif

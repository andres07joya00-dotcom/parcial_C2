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
    DispositivoInteligente(string nom, bool est, float consumo);

    
    void encender();
    void apagar();
    float medirConsumo(float horas);
    void bloquearControlRemoto();
    void desbloquearControlRemoto();
    void mostrarInfo();
    string obtenerNombre();
};

#endif

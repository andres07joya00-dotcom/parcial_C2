#include "DispositivoInteligente.h"

DispositivoInteligente::DispositivoInteligente(string nom, float consumo)
    : nombre(nom), estado(false), bloqueado(false), consumoEnergia(consumo) {}

string DispositivoInteligente::nomb() {
    return nombre;
}

void DispositivoInteligente::encender() {
    if (bloqueado) {
        cout << nombre << " está bloqueado y no puede encender" << endl;
        return;
    }
    estado = true;
    cout << nombre << " encendido" << endl;
}

void DispositivoInteligente::apagar() {
    if (bloqueado) {
        cout << nombre << " está bloqueado y no puede apagar" << endl;
        return;
    }
    estado = false;
    cout << nombre << " apagado" << endl;
}

float DispositivoInteligente::obtenerConsumoEnergia(float horas) {
    return consumoEnergia * horas;
}

void DispositivoInteligente::bloquearControlRemoto() {
    bloqueado = true;
    cout << nombre << " bloqueado" << endl;
}

void DispositivoInteligente::desbloquearControlRemoto() {
    bloqueado = false;
    cout << nombre << " desbloqueado" << endl;
}

#include "DispositivoInteligente.h"

DispositivoInteligente::DispositivoInteligente(string nom, bool est, float consumo)
    : nombre(nom), estado(est), bloqueado(false), consumoEnergia(consumo) {}

void DispositivoInteligente::encender() {
    if (bloqueado) {
        cout << nombre << " está bloqueado y no puede encenderse.\n";
        return;
    }
    estado = true;
    cout << nombre << " encendido.\n";
}

void DispositivoInteligente::apagar() {
    if (bloqueado) {
        cout << nombre << " está bloqueado y no puede apagarse.\n";
        return;
    }
    estado = false;
    cout << nombre << " apagado.\n";
}

float DispositivoInteligente::medirConsumo(float horas) {
    return consumoEnergia * horas;
}

void DispositivoInteligente::bloquearControlRemoto() {
    bloqueado = true;
    cout << nombre << " bloqueado.\n";
}

void DispositivoInteligente::desbloquearControlRemoto() {
    bloqueado = false;
    cout << nombre << " desbloqueado.\n";
}

void DispositivoInteligente::mostrarInfo() {
    cout << "Nombre del dispositivo: " << nombre << endl;
    cout << "Estado: " << (estado ? "Encendido" : "Apagado") << endl;
    cout << "Consumo energético: " << consumoEnergia << " Wh" << endl;
    cout << "Bloqueado: " << (bloqueado ? "Sí" : "No") << endl;
    
}

string DispositivoInteligente::obtenerNombre() {
    return nombre;
}

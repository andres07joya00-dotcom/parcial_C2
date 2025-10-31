/**
 * @file DispositivoInteligente.cpp
 * @brief Implementación de la clase DispositivoInteligente.
 *
 * Este archivo contiene la implementación de los métodos de la clase 
 * `DispositivoInteligente`, la cual permite controlar un dispositivo 
 * (encenderlo, apagarlo, bloquearlo o medir su consumo energético).
 *
 */

#include "DispositivoInteligente.h"

/**
 * @brief Constructor de la clase DispositivoInteligente.
 *
 * Inicializa un dispositivo con los valores proporcionados y lo deja
 * desbloqueado por defecto.
 *
 * @param nom Nombre del dispositivo.
 * @param est Estado inicial (encendido o apagado).
 * @param consumo Consumo energético base (Wh o kWh, según implementación).
 */
DispositivoInteligente::DispositivoInteligente(string nom, bool est, float consumo)
    : nombre(nom), estado(est), bloqueado(false), consumoEnergia(consumo) {}

/**
 * @brief Enciende el dispositivo.
 *
 * Si el dispositivo no está bloqueado, cambia su estado a encendido.
 * En caso contrario, muestra un mensaje indicando que está bloqueado.
 */
void DispositivoInteligente::encender() {
    if (bloqueado) {
        cout << nombre << " está bloqueado y no puede encenderse.\n";
        return;
    }
    estado = true;
    cout << nombre << " encendido.\n";
}

/**
 * @brief Apaga el dispositivo.
 *
 * Si el dispositivo no está bloqueado, cambia su estado a apagado.
 * Si está bloqueado, muestra un mensaje informando la restricción.
 */
void DispositivoInteligente::apagar() {
    if (bloqueado) {
        cout << nombre << " está bloqueado y no puede apagarse.\n";
        return;
    }
    estado = false;
    cout << nombre << " apagado.\n";
}

/**
 * @brief Calcula el consumo energético del dispositivo.
 *
 * Multiplica el consumo energético base por las horas de funcionamiento.
 *
 * @param horas Cantidad de horas que el dispositivo ha estado encendido.
 * @return Consumo total (en Wh o kWh, según la unidad definida).
 */
float DispositivoInteligente::medirConsumo(float horas) {
    return consumoEnergia * horas;
}

/**
 * @brief Bloquea el control remoto del dispositivo.
 *
 * Impide que el dispositivo sea encendido o apagado hasta ser desbloqueado.
 */
void DispositivoInteligente::bloquearControlRemoto() {
    bloqueado = true;
    cout << nombre << " bloqueado.\n";
}

/**
 * @brief Desbloquea el control remoto del dispositivo.
 *
 * Permite nuevamente encender o apagar el dispositivo.
 */
void DispositivoInteligente::desbloquearControlRemoto() {
    bloqueado = false;
    cout << nombre << " desbloqueado.\n";
}

/**
 * @brief Muestra toda la información del dispositivo.
 *
 * Despliega en consola el nombre, estado, consumo y si está bloqueado.
 */
void DispositivoInteligente::mostrarInfo() {
    cout << "Nombre del dispositivo: " << nombre << endl;
    cout << "Estado: " << (estado ? "Encendido" : "Apagado") << endl;
    cout << "Consumo energético: " << consumoEnergia << " Wh" << endl;
    cout << "Bloqueado: " << (bloqueado ? "Sí" : "No") << endl;

}

/**
 * @brief Obtiene el nombre del dispositivo.
 * @return Nombre del dispositivo como cadena de texto.
 */
string DispositivoInteligente::obtenerNombre() {
    return nombre;
}

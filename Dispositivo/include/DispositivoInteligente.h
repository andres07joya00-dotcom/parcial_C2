/**
 * @file dispositivo_inteligente.h
 * @brief Declaración de la clase DispositivoInteligente.
 *
 * Esta clase representa un dispositivo inteligente que puede ser controlado 
 * de forma remota. Permite encenderlo, apagarlo, bloquear o desbloquear 
 * su control remoto, y medir el consumo energético durante un periodo de uso.
 *
 */

#ifndef DISPOSITIVO_INTELIGENTE_H
#define DISPOSITIVO_INTELIGENTE_H

#include <iostream>
#include <string>
using namespace std;

/**
 * @class DispositivoInteligente
 * @brief Clase que modela un dispositivo inteligente con control de energía y estado.
 *
 * Esta clase proporciona funcionalidades para manipular el estado de un dispositivo,
 * conocer su consumo energético y controlar su acceso remoto mediante bloqueo o desbloqueo.
 */
class DispositivoInteligente {
private:
    string nombre;          ///< Nombre del dispositivo.
    bool estado;            ///< Estado del dispositivo: `true` encendido, `false` apagado.
    bool bloqueado;         ///< Indica si el control remoto está bloqueado.
    float consumoEnergia;   ///< Consumo energético (en watts o kWh, según la implementación).

public:
    /**
     * @brief Constructor del dispositivo inteligente.
     * @param nom Nombre del dispositivo.
     * @param est Estado inicial (encendido/apagado).
     * @param consumo Consumo energético del dispositivo.
     */
    DispositivoInteligente(string nom, bool est, float consumo);

    /**
     * @brief Enciende el dispositivo.
     * 
     * Si el control remoto no está bloqueado, cambia el estado del dispositivo a encendido.
     */
    void encender();

    /**
     * @brief Apaga el dispositivo.
     * 
     * Si el control remoto no está bloqueado, cambia el estado del dispositivo a apagado.
     */
    void apagar();

    /**
     * @brief Calcula el consumo energético del dispositivo.
     * @param horas Cantidad de horas que el dispositivo ha estado encendido.
     * @return Consumo total estimado en función del tiempo de uso.
     */
    float medirConsumo(float horas);

    /**
     * @brief Bloquea el control remoto del dispositivo.
     *
     * Impide encender o apagar el dispositivo hasta que sea desbloqueado.
     */
    void bloquearControlRemoto();

    /**
     * @brief Desbloquea el control remoto del dispositivo.
     */
    void desbloquearControlRemoto();

    /**
     * @brief Muestra la información completa del dispositivo.
     *
     * Incluye su nombre, estado actual, bloqueo y consumo energético.
     */
    void mostrarInfo();

    /**
     * @brief Obtiene el nombre del dispositivo.
     * @return Nombre del dispositivo como cadena de texto.
     */
    string obtenerNombre();
};

#endif


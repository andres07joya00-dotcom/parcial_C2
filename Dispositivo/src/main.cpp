/**
 * @file main.cpp
 * @brief Programa principal para simular el uso de dispositivos inteligentes.
 *
 * Este programa permite registrar varios dispositivos inteligentes,
 * mostrar su información, simular su consumo energético en función del
 * tiempo de uso y controlar el acceso remoto mediante bloqueo y desbloqueo.
 *
 * Cada dispositivo se representa con la clase `DispositivoInteligente`,
 * que administra su nombre, estado (encendido/apagado), consumo energético
 * y si su control remoto está bloqueado o no.
 *
 * @date 2025-10-30
 * @version 1.0
 */

#include <iostream>
#include <vector>
#include "DispositivoInteligente.h"
using namespace std;

/**
 * @brief Función principal del programa.
 *
 * Permite al usuario:
 * - Registrar varios dispositivos inteligentes.
 * - Mostrar la información de cada uno.
 * - Simular su consumo energético según las horas de uso.
 * - Bloquear el control remoto de un dispositivo.
 * - Visualizar el estado final de todos los dispositivos.
 *
 * @return 0 al finalizar la ejecución correctamente.
 */
int main() {
    vector<DispositivoInteligente> dispositivos; ///< Vector que almacena los dispositivos registrados.
    int n;

    cout << "¿Cuántos dispositivos desea registrar? ";
    cin >> n;

    // --- Registro de dispositivos ---
    for (int i = 0; i < n; i++) {
        string nombre;
        float consumo;

        cout << "\nIngrese nombre del dispositivo " << i + 1 << ": ";
        cin.ignore();
        getline(cin, nombre);

        cout << "Ingrese consumo energético (Wh): ";
        cin >> consumo;

        // Crea un nuevo dispositivo apagado por defecto
        DispositivoInteligente nuevoDispositivo(nombre, false, consumo);
        dispositivos.push_back(nuevoDispositivo);
    }

    // --- Mostrar dispositivos registrados ---
    cout << "\n--- Lista de dispositivos registrados ---\n";
    for (int i = 0; i < dispositivos.size(); i++) {
        dispositivos[i].mostrarInfo();
    }

    // --- Simulación del consumo energético ---
    cout << "\n--- Simulación de consumo ---\n";
    for (int i = 0; i < dispositivos.size(); i++) {
        float horas;
        cout << "\nHoras de uso para " << dispositivos[i].obtenerNombre() << ": ";
        cin >> horas;

        dispositivos[i].encender();
        cout << "Consumo total: " << dispositivos[i].medirConsumo(horas) << " Wh\n";
        dispositivos[i].apagar();
    }

    // --- Ejemplo de bloqueo de control remoto ---
    cout << "\n--- Bloqueo de control remoto ---\n";
    dispositivos[0].bloquearControlRemoto();
    dispositivos[0].encender();  // No debería poder encenderse

    // --- Mostrar estado final de todos los dispositivos ---
    cout << "\n--- Estado final ---\n";
    for (int i = 0; i < dispositivos.size(); i++) {
        dispositivos[i].mostrarInfo();
    }

    return 0;
}

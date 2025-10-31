#include <iostream>
#include <vector>
#include "DispositivoInteligente.h"
using namespace std;

int main() {
    vector<DispositivoInteligente> dispositivos;

    int n;
    cout << "¿Cuántos dispositivos desea registrar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string nombre;
        float consumo;

        cout << "\nIngrese nombre del dispositivo:" << i + 1 << ": ";
        cin.ignore();
        getline(cin, nombre);
        cout << "Ingrese consumo energético (Wh): ";
        cin >> consumo;

        DispositivoInteligente nuevoDispositivo(nombre, false, consumo);
        dispositivos.push_back(nuevoDispositivo);
    }

    cout << "\n--- Lista de dispositivos registrados ---\n";
    for (int i = 0; i < dispositivos.size(); i++) {
        dispositivos[i].mostrarInfo();
    }

    cout << "\n--- Simulación de consumo ---\n";
    for (int i = 0; i < dispositivos.size(); i++) {
        float horas;
        cout << "\nHoras de uso para " << dispositivos[i].obtenerNombre() << ": ";
        cin >> horas;

        dispositivos[i].encender();
        cout << "Consumo total: " << dispositivos[i].medirConsumo(horas) << " Wh\n";
        dispositivos[i].apagar();
    }

    cout << "\n--- Bloqueo de control remoto ---\n";
    dispositivos[0].bloquearControlRemoto();
    dispositivos[0].encender(); 

    cout << "\n--- Estado final ---\n";
    for (int i = 0; i < dispositivos.size(); i++) {
        dispositivos[i].mostrarInfo();
    }

    return 0;
}

#include "RegistroPasajero.h"

Cliente RegistroPasajero::registrarPasajero()
{
    string nombre, apellido, telefono, carnetIdentidad, password;

    cout << "Registro de Pasajero" << endl;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Teléfono: ";
    cin >> telefono;
    cout << "Carnet de Identidad: ";
    cin >> carnetIdentidad;
    cout << "Contraseña: ";
    cin >> password;

    // Crear y devolver un nuevo Cliente
    return Cliente(nombre + "_" + apellido, password, "10", "0");
}
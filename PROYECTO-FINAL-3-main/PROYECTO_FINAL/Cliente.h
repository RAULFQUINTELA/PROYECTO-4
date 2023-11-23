#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class Cliente : public Usuario
{
private:
    string calificacionCliente;
    string deudasPendientesCliente;
    string nombre;
    string apellido;
    string telefono;

public:
    Cliente(string _login, string _password, string _calificacion, string _deudas);

    // Nuevas funciones para las opciones del menú
    void solicitarViaje();
    void historialViajes();
    void visualizarInformacionCliente();
    void modificarTelefono();
    void modificarContraseña();
    void modificarDatosCuenta();
    void eliminarCuenta();
    void mostrarMenuCliente();
};
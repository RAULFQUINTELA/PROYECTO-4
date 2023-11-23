#include "Chofer.h"

// Constructor con parámetros
Chofer::Chofer(string _login, string _password, string _calificacion, string _deudas)
    : Usuario(_login, _password), calificacionChofer(_calificacion), deudasPendientesChofer(_deudas)
{
    cout << "¡Hola, chofer " << _login << "! Gracias por ser parte de nuestro equipo." << endl;
}

bool Chofer::verificarLogin(string _username, string _password)
{
    return (getLogin() == _username && getPassword() == _password);
}
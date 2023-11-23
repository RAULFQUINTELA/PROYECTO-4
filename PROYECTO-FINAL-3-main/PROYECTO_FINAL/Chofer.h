#pragma once
#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class Chofer : public Usuario
{
private:
    string calificacionChofer;
    string deudasPendientesChofer;

public:
    // Constructor con parámetros
    Chofer(string _login, string _password, string _calificacion, string _deudas);

    bool verificarLogin(string _username, string _password);
};
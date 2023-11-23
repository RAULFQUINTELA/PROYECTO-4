#include "Usuario.h"

Usuario::Usuario(string _login, string _password)
    : login(_login), password(_password)
{
    // cout << "¡Usuario inicializado!" << endl;
}

bool Usuario::verificarLogin(string _username, string _password)
{
    return (login == _username && password == _password);
}
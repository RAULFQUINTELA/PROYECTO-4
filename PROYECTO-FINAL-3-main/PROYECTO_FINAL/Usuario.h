#pragma once
#include <iostream>
#include <string>

using namespace std;

class Usuario
{
protected:
    string login;
    string password;

public:
    Usuario(string _login, string _password);
    static bool verificarLogin(string _username, string _password);

    string getLogin() const { return login; }
    string getPassword() const { return password; }
};
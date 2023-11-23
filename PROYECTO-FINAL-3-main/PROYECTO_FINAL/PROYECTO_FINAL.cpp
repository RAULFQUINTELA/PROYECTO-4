#include <iostream>
#include <string>
#include "Cliente.h"
#include "Chofer.h"
#include "RegistroPasajero.h"
#include "RegistroChofer.h"

using namespace std;

// Función para obtener un Cliente por su nombre de usuario
Cliente obtenerClientePorLogin(const string& login, Cliente* clientes, int numClientes)
{
    for (int i = 0; i < numClientes; ++i)
    {
        if (clientes[i].getLogin() == login)
        {
            return clientes[i];
        }
    }
    // Si no se encuentra el cliente, devuelve uno con datos predeterminados
    return Cliente("default_login", "default_password", "0", "0");
}

// Funciones para las opciones del menú
void iniciarSesion(Cliente& cliente, Chofer& chofer, Cliente* clientes, int numClientes)
{
    string username, password;

    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contraseña: ";
    cin >> password;

    // Verificar si el usuario es un Cliente registrado
    if (cliente.verificarLogin(username, password))
    {
        cout << "¡Inicio de sesión exitoso como cliente!" << endl;
        // Puedes realizar acciones específicas para clientes aquí
    }
    // Verificar si el usuario es un Chofer registrado
    else if (chofer.verificarLogin(username, password))
    {
        cout << "¡Inicio de sesión exitoso como chofer!" << endl;
        // Puedes realizar acciones específicas para choferes aquí
    }
    else
    {
        cout << "Nombre de usuario o contraseña incorrectos. Por favor, regístrese primero." << endl;
    }
}

Cliente registrarCliente()
{
    // Registro de Pasajero
    Cliente nuevoPasajero = RegistroPasajero::registrarPasajero();
    cout << "Registro exitoso como cliente. Ahora puedes iniciar sesion." << endl;
    return nuevoPasajero;
}

Chofer registrarChofer()
{
    // Registro de Chofer
    Chofer nuevoChofer = RegistroChofer::registrarChofer();
    cout << "Registro exitoso como chofer. Ahora puedes iniciar sesion." << endl;
    return nuevoChofer;
}

int main()
{
    const int maxClientes = 100;  // Establece el máximo número de clientes
    Cliente clientes[maxClientes];  // Array que contendrá todos los clientes registrados
    int numClientes = 0;  // Variable para rastrear el número actual de clientes registrados

    int opcion;

    do
    {
        cout << "Bienvenido a la aplicacion. Por favor, elige tu opcion:" << endl;
        cout << "1. Iniciar Sesion" << endl;
        cout << "2. Registrarse como Cliente" << endl;
        cout << "3. Registrarse como Chofer" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese el numero correspondiente a su eleccion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            iniciarSesion(clienteActual, choferActual, clientes, numClientes);

            // Después de iniciar sesión, verifica si es un cliente y ejecuta su menú
            if (clienteActual.getLogin() != "default_login")
            {
                clienteActual.mostrarMenuCliente();
            }
            break;
        case 2:
            clienteActual = registrarCliente();
            clientes[numClientes] = clienteActual;  // Agrega el nuevo cliente al array
            numClientes++;  // Incrementa el número de clientes registrados
            break;
        case 3: choferActual = registrarChofer(); break;
        case 4: cout << "Gracias por usar la aplicacion. ¡Hasta luego!" << endl; break;
        default: cout << "Opcion no valida. Por favor, elige una opcion valida." << endl; break;
        }

    } while (opcion != 4);

    return 0;
}
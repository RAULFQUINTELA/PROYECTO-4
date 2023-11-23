#include "Cliente.h"

Cliente::Cliente(string _login, string _password, string _calificacion, string _deudas)
    : Usuario(_login, _password), calificacionCliente(_calificacion), deudasPendientesCliente(_deudas)
{
    cout << "¡Bienvenido, estimado cliente " << _login << "! Gracias por unirte a nuestra aplicación." << endl;
}

void Cliente::solicitarViaje()
{
    string destino;
    double distancia;
    double oferta;

    cout << "Ingrese el destino: ";
    cin.ignore(); // Limpiar el buffer del teclado
    getline(cin, destino);

    cout << "Ingrese la distancia del viaje en kilómetros: ";
    cin >> distancia;

    cout << "¿Cuánto estás dispuesto a pagar por el viaje a " << destino << "? Bs.";
    cin >> oferta;

    const double costoBase = 5.0; // Costo base en bolivianos

    // Lógica para aceptar o rechazar la oferta y calcular el costo del viaje
    if (oferta >= costoBase)
    {
        cout << "Oferta aceptada. El costo del viaje a " << destino << " es: Bs." << oferta << endl;
    }
    else
    {
        cout << "Oferta demasiado baja. El costo mínimo aceptable es: Bs." << costoBase << endl;
    }
}

void Cliente::historialViajes()
{
    // Necesito generar la lógica para mostrar el historial de viajes
}

void Cliente::visualizarInformacionCliente()
{
    // Necesito generar la lógica para visualizar la información del cliente
}

void Cliente::modificarDatosCuenta()
{
    // Necesito generar la lógica para modificar los datos de la cuenta del cliente
}

void Cliente::eliminarCuenta()
{
    // Necesito generar la lógica para eliminar la cuenta del cliente
}

void Cliente::mostrarMenuCliente()
{
    int opcion;

    do
    {
        cout << "Menú de Cliente" << endl;
        cout << "1. Solicitar Viaje" << endl;
        cout << "2. Historial de Viajes" << endl;
        cout << "3. Visualizar Información del Cliente" << endl;
        cout << "4. Modificar Datos de la Cuenta" << endl;
        cout << "5. Eliminar la Cuenta" << endl;
        cout << "6. Volver al Lobby" << endl;
        cout << "Ingrese el número correspondiente a su elección: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: solicitarViaje(); break;
        case 2: historialViajes(); break;
        case 3: visualizarInformacionCliente(); break;
        case 4: modificarDatosCuenta(); break;
        case 5: eliminarCuenta(); break;
        case 6: cout << "Volviendo al Lobby..." << endl; break;
        default: cout << "Opción no válida. Por favor, elija una opción válida." << endl; break;
        }

    } while (opcion != 6);
}
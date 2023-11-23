#include "Cliente.h"

Cliente::Cliente(string _login, string _password, string _calificacion, string _deudas)
    : Usuario(_login, _password), calificacionCliente(_calificacion), deudasPendientesCliente(_deudas)
{
    cout << "�Bienvenido, estimado cliente " << _login << "! Gracias por unirte a nuestra aplicaci�n." << endl;
}

void Cliente::solicitarViaje()
{
    string destino;
    double distancia;
    double oferta;

    cout << "Ingrese el destino: ";
    cin.ignore(); // Limpiar el buffer del teclado
    getline(cin, destino);

    cout << "Ingrese la distancia del viaje en kil�metros: ";
    cin >> distancia;

    cout << "�Cu�nto est�s dispuesto a pagar por el viaje a " << destino << "? Bs.";
    cin >> oferta;

    const double costoBase = 5.0; // Costo base en bolivianos

    // L�gica para aceptar o rechazar la oferta y calcular el costo del viaje
    if (oferta >= costoBase)
    {
        cout << "Oferta aceptada. El costo del viaje a " << destino << " es: Bs." << oferta << endl;
    }
    else
    {
        cout << "Oferta demasiado baja. El costo m�nimo aceptable es: Bs." << costoBase << endl;
    }
}

void Cliente::historialViajes()
{
    // Necesito generar la l�gica para mostrar el historial de viajes
}

void Cliente::visualizarInformacionCliente()
{
    // Necesito generar la l�gica para visualizar la informaci�n del cliente
}

void Cliente::modificarDatosCuenta()
{
    // Necesito generar la l�gica para modificar los datos de la cuenta del cliente
}

void Cliente::eliminarCuenta()
{
    // Necesito generar la l�gica para eliminar la cuenta del cliente
}

void Cliente::mostrarMenuCliente()
{
    int opcion;

    do
    {
        cout << "Men� de Cliente" << endl;
        cout << "1. Solicitar Viaje" << endl;
        cout << "2. Historial de Viajes" << endl;
        cout << "3. Visualizar Informaci�n del Cliente" << endl;
        cout << "4. Modificar Datos de la Cuenta" << endl;
        cout << "5. Eliminar la Cuenta" << endl;
        cout << "6. Volver al Lobby" << endl;
        cout << "Ingrese el n�mero correspondiente a su elecci�n: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: solicitarViaje(); break;
        case 2: historialViajes(); break;
        case 3: visualizarInformacionCliente(); break;
        case 4: modificarDatosCuenta(); break;
        case 5: eliminarCuenta(); break;
        case 6: cout << "Volviendo al Lobby..." << endl; break;
        default: cout << "Opci�n no v�lida. Por favor, elija una opci�n v�lida." << endl; break;
        }

    } while (opcion != 6);
}
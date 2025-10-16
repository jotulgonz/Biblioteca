#include <algorithm>
#include <iomanip>
#include <iostream>
#include <locale>
#include <string>
#include <sstream>
#include "Libro.h"
#include "usuario.h"
using namespace std;

int main()
{
    locale::global(locale("es_ES.UTF-8"));
    int opcion;
    string entrada;

    do {
        cout << "╔════════════════════════════════════════╗\n";
        cout << "║   SISTEMA DE GESTIÓN DE BIBLIOTECA     ║\n";
        cout << "╠════════════════════════════════════════╣\n";
        cout << "║1. Gestión de Libros                    ║\n";
        cout << "║2. Gestión de Usuarios                  ║\n";
        cout << "║3. Gestión de Préstamos                 ║\n";
        cout << "║4. Reportes y Estadísticas              ║\n";
        cout << "║5. Guardar y Salir                      ║\n";
        cout << "╚════════════════════════════════════════╝\n";
        cout << "Selecciona una opción: ";
        cin >> entrada;

        stringstream LETRAS (entrada);
        if (!(LETRAS >> opcion)) {
            opcion = -1; // Entrada inválida
            cin.clear(); // Limpia el error
        }

        switch (opcion) {
        case 1:
            cout << "Función de gestión de libros aún no implementada.\n";
            break;
        case 2:
            cout << "Función de gestión de usuarios aún no implementada.\n";
            break;
        case 3:
            cout << "Función de gestión de préstamos aún no implementada.\n";
            break;
        case 4:
            cout << "Función de reportes aún no implementada.\n";
            break;
        case 5:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opción no válida.\n";
        }

        cout << endl;

    } while (opcion != 5);

    return 0;
}

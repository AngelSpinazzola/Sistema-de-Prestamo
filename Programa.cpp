#include<iostream>
using namespace std;

#include "Programa.h"
#include "ClienteMenu.h"
#include "OperacionesMenu.h"
#include "TipoPrestamoMenu.h"
#include "TesoreriaMenu.h"
#include "AjustesMenu.h"

void Programa::bienvenida(){
    cout << "Hola " << _nombreUsuario << "!" << endl << endl;
    cout << "Bienvenido a nuestro Sistema de Gestion de Prestamos" << endl << endl;
    cout << "Creado por Angel Spinazzola, Juan Pereyra y Raul Rolon" << endl << endl;
    system("pause");
}

void Programa::iniciar(){
    while(true){
        system("cls");
        int opcion;
        cout << "********************************" << endl;
        cout << "*                              *" << endl;
        cout << "*        MENU PRINCIPAL        *" << endl;
        cout << "*                              *" << endl;
        cout << "********************************" << endl;
        cout << "*                              *" << endl;
        cout << "* 1 - Operaciones              *" << endl;
        cout << "* 2 - Clientes                 *" << endl;
        cout << "* 3 - Tipos de prestamo        *" << endl;
        cout << "* 4 - Tesoreria                *" << endl;
        cout << "* 5 - Ajustes                  *" << endl;
        cout << "* 0 - Salir del programa       *" << endl;
        cout << "*                              *" << endl;
        cout << "********************************" << endl;
        cout << endl;
        cout << "Opcion: ";
        cin >> opcion;
        system("cls");

        switch(opcion){
        case 1:
            {
                OperacionesMenu operacionesMenu;
                operacionesMenu.iniciar();
            }
            break;
        case 2:
            {
                ClienteMenu clienteMenu;
                clienteMenu.iniciar();
            }
            break;
        case 3:
            {
                TipoPrestamoMenu tipoPrestamoMenu;
                tipoPrestamoMenu.iniciar();
            }
            break;
        case 4:
                TesoreriaMenu tesoreriaMenu;
                tesoreriaMenu.iniciar();
            break;
        case 5:
                AjustesMenu ajustesMenu;
                ajustesMenu.iniciar();
            break;
        case 0:
            return;
            break;
        default:
            cout << "Opcion incorrecta. Seleccione nuevamente" << endl;
            system("pause");
            break;
        }
    }
}

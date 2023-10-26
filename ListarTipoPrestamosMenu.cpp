#include<iostream>
using namespace std;

#include "ListarTipoPrestamosMenu.h"

void ListarTipoPrestamosMenu::iniciar(){
    while(true){
        system("cls");
        int opcion;
        cout << "****************************************" << endl;
        cout << "*                                      *" << endl;
        cout << "*       LISTAR TIPO DE PRESTAMOS       *" << endl;
        cout << "*                                      *" << endl;
        cout << "****************************************" << endl;
        cout << "*                                      *" << endl;
        cout << "* 1 - Tipos de prestamo activos        *" << endl;
        cout << "* 2 - Tipo de prestamo por ID          *" << endl;
        cout << "* 0 - Volver al menu Tipo de Prestamos *" << endl;
        cout << "*                                      *" << endl;
        cout << "****************************************" << endl;
        cout << endl;
        cout << "Opcion: ";
        cin >> opcion;
        system("cls");
        switch(opcion){
        case 1:

            break;
        case 2:

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

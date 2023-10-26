#include<iostream>
using namespace std;

#include "OperacionesMenu.h"
#include "ListarOperacionesMenu.h"

void OperacionesMenu::iniciar(){
    while(true){
        system("cls");
        int opcion;
        cout << "********************************" << endl;
        cout << "*                              *" << endl;
        cout << "*         OPERACIONES          *" << endl;
        cout << "*                              *" << endl;
        cout << "********************************" << endl;
        cout << "*                              *" << endl;
        cout << "* 1 - Nueva Operacion          *" << endl;
        cout << "* 2 - Modificar Opearion       *" << endl;
        cout << "* 3 - Anular Operacion         *" << endl;
        cout << "* 4 - Listar Operaciones       *" << endl;
        cout << "* 0 - Volver al menu principal *" << endl;
        cout << "*                              *" << endl;
        cout << "********************************" << endl;
        cout << endl;
        cout << "Opcion: ";
        cin >> opcion;
        system("cls");
        switch(opcion){
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:
            {
                ListarOperacionesMenu listarOperacionesMenu;
                listarOperacionesMenu.iniciar();
            }
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

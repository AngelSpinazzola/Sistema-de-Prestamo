#include<iostream>
using namespace std;

#include "ListarOperacionesMenu.h"

void ListarOperacionesMenu::iniciar(){
    while(true){
        system("cls");
        int opcion;
        cout << "**********************************" << endl;
        cout << "*                                *" << endl;
        cout << "*        LISTAR OPERACIONES      *" << endl;
        cout << "*                                *" << endl;
        cout << "**********************************" << endl;
        cout << "*                                *" << endl;
        cout << "* 1 - Operaciones activas        *" << endl;
        cout << "* 2 - Operacion por ID           *" << endl;
        cout << "* 0 - Volver al menu Operaciones *" << endl;
        cout << "*                                *" << endl;
        cout << "**********************************" << endl;
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

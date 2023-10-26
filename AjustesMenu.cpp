#include<iostream>
using namespace std;

#include "AjustesMenu.h"

void AjustesMenu::iniciar(){
    while(true){
        system("cls");
        int opcion;
        cout << "***********************************" << endl;
        cout << "*                                 *" << endl;
        cout << "*             AJUSTES             *" << endl;
        cout << "*                                 *" << endl;
        cout << "***********************************" << endl;
        cout << "*                                 *" << endl;
        cout << "* 1 - Cambiar Nombre de Usuario   *" << endl;
        cout << "* 2 - Eliminar datos del programa *" << endl;
        cout << "* 0 - Volver al menu principal    *" << endl;
        cout << "*                                 *" << endl;
        cout << "***********************************" << endl;
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

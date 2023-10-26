#pragma once
#include "Cliente.h"

class ClienteArchivo{
public:
    ClienteArchivo(const char* _nombreArchivo);
    bool Guardar(Cliente reg);
    bool Guardar(Cliente reg, int nroRegistro);
    bool Modificar(int ID);
    int BuscarPorID(int ID);
    int ContarRegistros();
    Cliente Leer(int nroRegistro);

private:
    char nombreArchivo[30];

};

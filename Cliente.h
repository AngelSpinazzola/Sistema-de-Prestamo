#ifndef CLIENTE_H
#define CLIENTE_H
#pragma once
#include "Direccion.h"

class Cliente{
public:
    void setId(int id);
    void setNombre(const char *nombre);
    void setApellido(const char *apellido);
    void setDireccion(Direccion direccion);
    void setTelefono(const char *telefono);
    void setEstado(bool estado);

    int getId();
    const char *getNombre();
    const char *getApellido();
    Direccion& getDireccion();
    const char *getTelefono();
    bool getEstado();

    Cliente();

private:
    int _id;
    char _nombre[30];
    char _apellido[30];
    Direccion _direccion;
    char _telefono[30];
    bool _estado;
};

#endif // CLIENTE_H

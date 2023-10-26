#include<iostream>
using namespace std;
#include "CargarCadena.h"
#include "Cliente.h"


void Cliente::setId(int id){
    _id = id;
}
void Cliente::setNombre(const char *nombre){
    strcpy(_nombre,nombre);
}
void Cliente::setApellido(const char *apellido){
    strcpy(_apellido,apellido);
}
void Cliente::setDireccion(Direccion direccion){
    _direccion = direccion;
}
void Cliente::setTelefono(const char *telefono){
    strcpy(_telefono,telefono);
}
void Cliente::setEstado(bool estado){
    _estado = estado;
}

int Cliente::getId(){
    return _id;
}
const char *Cliente::getNombre(){
    return _nombre;
}
const char *Cliente::getApellido(){
    return _apellido;
}
Direccion& Cliente::getDireccion(){
    return _direccion;
}
const char *Cliente::getTelefono(){
    return _telefono;
}
bool Cliente::getEstado(){
    return _estado;
}

Cliente::Cliente(){
    setId(0);
    setNombre("");
    setApellido("");
    setDireccion(_direccion);
    setTelefono("");
    setEstado(1);
}

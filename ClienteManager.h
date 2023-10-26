#pragma once
#include "Cliente.h"
#include "ClienteArchivo.h"
#include <cstring>

class ClienteManager{
public:
    void Cargar();
    void Mostrar(Cliente reg);
    void Eliminar();
    void MostrarCantidadRegistros();
    void ListarTodos();
    int Buscar(int ClienteID);
    void ListarPorID();
    void Editar();
    bool OpcionesParaModificar(int IDCliente);
    bool ModificarNombre(int posicion);
    bool ModificarApellido(int posicion);
    bool ModificarTelefono(int posicion);
    bool ModificarProvincia(int posicion);
    bool ModificarLocalidad(int posicion);
    bool ModificarCodigoPostal(int posicion);
    bool ModificarCalle(int posicion);
    bool ModificarAltura(int posicion);
private:
    ClienteArchivo _archivo = ClienteArchivo("Clientes.dat");
};



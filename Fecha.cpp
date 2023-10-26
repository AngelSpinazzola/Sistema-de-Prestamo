#include<iostream>
using namespace std;
#include "Fecha.h"

int Fecha::getDia(){
    return _dia;
}
int Fecha::getMes(){
    return _mes;
}
int Fecha::getAnio(){
    return _anio;
}

void Fecha::setAnio(int anio){
        if(anio > 1900 && anio < 2050){
            _anio = anio;
        }
        else{
            _anio = 2000;
        }
}
void Fecha::setMes(int mes){
        if (mes > 0 && mes < 13){
            _mes = mes;
        }
        else{
            _mes = 1;
        }
}
void Fecha::setDia(int dia){
    int maxDia = 0;

    if (_mes == 1 || _mes == 3 || _mes == 5 || _mes == 7 || _mes == 8 || _mes == 10 || _mes == 12) {
        maxDia = 31;
    }
    else if (_mes == 4 || _mes == 6 || _mes == 9 || _mes == 11) {
        maxDia = 30;
    }
    else if (_mes == 2) {
        maxDia = (esBiciesto()) ? 29 : 28;
    }

    if (dia >= 1 && dia <= maxDia) {
        _dia = dia;
    }
    else{
        _dia = 1;
    }
}

bool Fecha::esBiciesto(){
    if (_anio % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

void Fecha::cargar(){
    int dia,mes,anio;
    cout << "Dia: ";
    cin >> dia;
    setDia(dia);
    cout << "Mes: ";
    cin >> mes;
    setMes(mes);
    cout << "Anio: ";
    cin >> anio;
    setAnio(anio);
}
void Fecha::mostrar(){
    cout << "Dia: " << _dia << endl;
    cout << "Mes: " << _mes << endl;
    cout << "Anio: " << _anio << endl;
}

Fecha::Fecha(){
    setAnio(2000);
    setMes(1);
    setDia(1);
}
Fecha::Fecha(int dia, int mes, int anio){
    setAnio(anio);
    setMes(mes);
    setDia(dia);
}

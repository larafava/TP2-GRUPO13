#include <string>
#include <iostream>
#pragma once

using namespace std;

class cFecha {

private:
    int _dia;
    int _mes;
    int _anio;
    int _horas;
    int _minutos;


public:
    cFecha(int dia, int mes, int anio, int horas, int minutos);
    ~cFecha();
    string to_string();
    void imprimiFecha();
    bool mismoDia(int dia);

};



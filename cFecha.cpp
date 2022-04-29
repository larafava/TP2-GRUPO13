#include "cFecha.h"

using namespace std;

cFecha::cFecha(int dia, int mes, int anio, int hora, int minutos) {
    this->_dia = dia;
    this->_mes = mes;
    this->_anio = anio;
    this->_horas = hora;
    this->_minutos = minutos;
}

cFecha::~cFecha() {
}

string cFecha::to_string() {
    return std::to_string(this->_dia) + "/" + std::to_string(this->_mes) + "/"+ std::to_string(this->_anio)+"/"+std::to_string(this->_horas)+"/"+std::to_string(this->_minutos)+"/";
}

void cFecha::imprimiFecha() {
    cout << this->to_string() + "\n";
}
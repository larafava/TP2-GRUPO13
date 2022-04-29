#include "cValija.h"

using namespace std;

cValija::cValija(float peso, int codigo) {
    this->_peso = peso;
    this->_codigo = codigo;
}

int cValija::getCodigo() {
    return this->_codigo;
}

float cValija::getPeso() {
    return this->_peso;
}
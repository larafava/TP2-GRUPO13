#include "cValija.h"

using namespace std;

cValija::~cValija(){

}

cValija::cValija(float peso, int codigo) {
    this->_peso = peso;
    this->_codigo = codigo;
}

int cValija::getCodigo() {
    return this->_codigo;
}

void cValija::imprimirValija(){
    cout << "peso valija  : "+std::to_string(this->_peso)+"\n";
}

float cValija::getPeso() {
    return this->_peso;
}
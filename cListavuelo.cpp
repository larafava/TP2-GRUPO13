#include "cListavuelo.h"
#include <string>
#include <iostream>

using namespace std;

cListavuelo::cListavuelo(int l) {
    this->capacidad = l;
    this->ocupado = 0;

    //inicializo la lista
    this->Lista = new Vuelo * [capacidad];
    int i;
    for (i = 0; i < capacidad; i++) {
        this->Lista[i] = NULL;
    }
}

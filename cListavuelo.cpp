#include "cListavuelo.h"
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

bool cListavuelo::Agregar(Vuelo* c) {
    bool toR = false;
    if (this->capacidad > this->ocupado) { //Me aseguro que tenga lugar en el arreglo
        this->Lista[this->ocupado] = c;
        this->ocupado = this->ocupado + 1;
        toR = true;
    }
    return toR;
}

void cListavuelo::listar() {
    int i;
    for (i = 0; i < this->ocupado; i++) {
        cout << this->Lista[i]->to_string();;
    }
}

Vuelo* cListavuelo::buscar(int id) {
    //recorrer la lista 
    // si se encuentra el elemento dejo de recorrer la lista y lo retorno
    // sino retorno null
    Vuelo * toR = NULL;
    bool found = false;
    int i = 0;
    while (!found && i < this->ocupado) {
        if (this->Lista[i]->getId()==id){
            toR = this->Lista[i];
            found = true;
        }
        }
    
    return toR;
}
/*
bool cListavuelo::eliminar(int posicion) {
    bool toR = false;
    if (posicion < this->ocupado) {
        //CUIDADO NO SE DESTRUYE EL OBJETO, EVALUAR SI HAY QUE DESTRUIRLO.
        delete this->Lista[posicion];
        this->Lista[posicion] = NULL;
        int i = posicion + 1;
        while (i < this->ocupados) {
            this->Lista[i - 1] = this->Lista[i];
            i++;
        }
        this->Lista[this->ocupados - 1] = NULL;
        this->ocupado = this->ocupados - 1;
        toR = true;

    }
    return toR;
}*/

Vuelo* cListavuelo::Quitar(int posicion) {
    Vuelo* toR = NULL;
    if (posicion < this->ocupado) {
        toR = this->Lista[posicion];
        this->Lista[posicion] = NULL;
        int i = posicion + 1;
        while (i < this->ocupado) {
            this->Lista[i - 1] = this->Lista[i];
            i++;
        }
        this->Lista[this->ocupado - 1] = NULL;
        this->ocupado = this->ocupado - 1;

    }
    return toR;

}

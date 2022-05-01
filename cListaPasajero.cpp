#include "cListaPasajeros.h"
using namespace std;

cListaPasajeros::cListaPasajeros(int l) {
    this->capacidad = l;
    this->ocupados = 0;
    
    //inicializo la lista
    this->Lista = new Pasajero * [capacidad];
    int i;
    for (i = 0; i < capacidad; i++) {
        this->Lista[i] = NULL;
    }

}

bool cListaPasajeros::Agregar(Pasajero* c) {
    bool toR = false;
    if (this->capacidad > this->ocupados) { //Me aseguro que tenga lugar en el arreglo
        this->Lista[this->ocupados] = c;
        this->ocupados = this->ocupados + 1;
        toR = true;
    }
    return toR;
}

void cListaPasajeros::listar() {
    int i;
    for (i = 0; i < this->ocupados; i++) {
        this->Lista[i]->ImprimirPasajero();
    }
}

Pasajero* cListaPasajeros::buscar(int dni) {
    //recorrer la lista 
    // si se encuentra el elemento dejo de recorrer la lista y lo retorno
    // sino retorno null
    Pasajero* toR = NULL;
    bool found = false;
    int i = 0;
    while (!found && i < this->ocupados) {
        if (this->Lista[i]->getDNI() == dni ) {
            toR = this->Lista[i];
            found = true;
        }
    }
    return toR;
}

bool cListaPasajeros::eliminar(int posicion) {
    bool toR = false;
    if (posicion < this->ocupados) {
        //CUIDADO NO SE DESTRUYE EL OBJETO, EVALUAR SI HAY QUE DESTRUIRLO.
        delete this->Lista[posicion];
        this->Lista[posicion] = NULL;
        int i = posicion + 1;
        while (i < this->ocupados) {
            this->Lista[i - 1] = this->Lista[i];
            i++;
        }
        this->Lista[this->ocupados - 1] = NULL;
        this->ocupados = this->ocupados - 1;
        toR = true;

    }
    return toR;
}

Pasajero* cListaPasajeros::Quitar(int posicion) {
    Pasajero* toR = NULL;
    if (posicion < this->ocupados) {
        toR = this->Lista[posicion];
        this->Lista[posicion] = NULL;
        int i = posicion + 1;
        while (i < this->ocupados) {
            this->Lista[i - 1] = this->Lista[i];
            i++;
        }
        this->Lista[this->ocupados - 1] = NULL;
        this->ocupados = this->ocupados - 1;

    }
    return toR;

}
int cListaPasajeros::getOcupado() {
    return this->ocupados;
 }

int cListaPasajeros::BuscarPos(int dni) {
    Pasajero* toR = NULL;
    bool found = false;
    int i = 0;
    while (!found && i < this->ocupados) {
        if (this->Lista[i]->getDNI() == dni) {
            toR = this->Lista[i];
            found = true;
        }
    }
    if (found == true)
        return i;
    else
        return -1;
}
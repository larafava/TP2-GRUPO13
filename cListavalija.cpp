#include "cListavalija.h"
#include"cValija.h"
using namespace std;

cListaValija::cListaValija(int l) {
    this->capacidad = l;
    this->ocupados = 0;
    this->peso = 0;
    //inicializo la lista
    this->Lista = new cValija * [capacidad];
    int i;
    for (i = 0; i < capacidad; i++) {
        this->Lista[i] = NULL;
    }

}

bool cListaValija::Agregar(cValija* c) {
    bool toR = false;
    if (this->peso + c->getPeso() < 25) {
        if (this->capacidad < this->ocupados)
            //lo inserto al principiop y cambio el valor de toR porque puedo insertar
        {
            this->Lista[this->ocupados] = c;
            this->ocupados = this->ocupados + 1;
            toR = true;
        }
    }
    return toR;
}

void cListaValija::listar() {
    int i;
    for (i = 0; i < this->ocupados; i++) {
        this->Lista[i]->imprimirValija();
    }
}

cValija* cListaValija::buscar(int id) {
    //recorrer la lista 
    // si se encuentra el elemento dejo de recorrer la lista y lo retorno
    // sino retorno null
    cValija* toR = NULL;
    bool found = false;
    int i = 0;
    while (!found && i < this->ocupados) {
        if (this->Lista[i]->getCodigo() == id) {
            toR = this->Lista[i];
            found = true;
        }
    }
    return toR;
}

bool cListaValija::eliminar(int posicion) {
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

cValija* cListaValija::Quitar(int posicion) {
    cValija* toR = NULL;
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

int cListaValija::getPos(cValija* v){
    bool found = false;
    int i = 0;
    while (!found && i < this->ocupados) {
        if (this->Lista[i]->getCodigo() == v->getCodigo()) {
            found = true;
        }
    }
    if (found == true)
        return i;
    else
        return -1;
    

}
//sobrecarga el operador [] en la lista de valijas
cValija* cListaValija::operator[](int pos){
    return this->Lista[pos];
}
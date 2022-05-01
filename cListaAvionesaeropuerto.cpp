#include "cListaAvionesaeropuerto.h"

#include "cAvion.h"

using namespace std;

cListaAvionesAeropuerto::cListaAvionesAeropuerto(int l) {
	this->capacidad = l;
	this->ocupado = 0;
    this->Lista = new cAvion * [capacidad];
    int i;
    for (i = 0; i < capacidad; i++) {
        this->Lista[i] = NULL;
    }

}

bool cListaAvionesAeropuerto::Agregar(cAvion*d) { //Se agrega cuando aterriza
    bool toR = false;
        if (this->capacidad < this->ocupado)
        {
            this->Lista[this->ocupado] = d;
            this->ocupado = this->ocupado + 1;
            toR = true;
        }
    
    return toR;
}

cAvion* cListaAvionesAeropuerto::Quitar(int posicion) { //Se quita cuando despega
 cAvion* toR = NULL;
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

bool cListaAvionesAeropuerto::Haycapacidad() {
    return this->capacidad < this->ocupado;
}

int cListaAvionesAeropuerto::getPosicion(cAvion * avion){
    
    bool found = false;
    int i = 0;
    while (!found && i < this->ocupado) {
        if (this->Lista[i]->getID()==avion->getID()) 
            found = true;
        else i++;
    }
    if (found == true)
        return i;
    else
        return -1;
}

cAvion * cListaAvionesAeropuerto::obtener(int pos){
    if(pos<this->ocupado)
        return this->Lista[pos];
}
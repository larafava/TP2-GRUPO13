#include "cAvion.h"
#include <string>
using namespace std;

cAvion::cAvion(int _ID, int _cantmaxpasajeros, int _cantactualpasajeros, int _pesomaxtotal) {
	this->ID = _ID;
	this->cantmaxpasajeros = _cantmaxpasajeros;
	this->cantactualpasajeros = _cantactualpasajeros;
	this->pesomaxtotal = _pesomaxtotal;
	//this->Vuelo = NULL;
}
string cAvion::to_string() {
	return std::to_string(this->ID) + "" + std::to_string(this->cantmaxpasajeros) + " " + std::to_string(this->cantactualpasajeros) + " " + std::to_string(this->pesomaxtotal) + "";
}

bool cAvion::ChequearCargaMaxima() {
	bool toR = false;
	
	if (this->Vuelo != NULL) {

		int aux = this->Vuelo->getPesoPasajero() + (75 * 4);
		toR = aux < this->pesomaxtotal;
		if (!toR)
			throw"Error, el peso total es mayor que la capacidad maxima";
	}
	return toR;
}

int cAvion::getID() {
	return this->ID;
}

Vuelo* cAvion::getVuelo() {
	return this->Vuelo;
}
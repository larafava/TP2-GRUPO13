#include "Avion.h"
#include <string>

using namespace std;

Avion::Avion(unsigned int _ID, int _cantmaxpasajeros, int _cantactualpasajeros, unsigned int _pesomaxtotal) {
	this->ID = _ID;
	this->cantmaxpasajeros = _cantmaxpasajeros;
	this->cantactualpasajeros = _cantactualpasajeros;
	this->pesomaxtotal = _pesomaxtotal;
}
string Avion::to_string() {
	return std::to_string(this->ID) + "" + std::to_string(this->cantmaxpasajeros) + " " + std::to_string(this->cantactualpasajeros) + " " + std::to_string(this->pesomaxtotal) + "";
}
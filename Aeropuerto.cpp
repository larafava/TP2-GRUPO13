#include "Aeropuerto.h"
#include <string>


using namespace std;

Aeropuerto::Aeropuerto( int _ID, unsigned int _capacidadaeropuerto, string _listavuelos, string _listaaviones) {
	
	this->capacidadaeropuerto = _capacidadaeropuerto;
	this->listavuelos = _listavuelos;
	this->listaaviones = _listaaviones;
}
string Aeropuerto::to_string() {
	return std::to_string(this->ID) + " " + std::to_string(this->capacidadaeropuerto) + " " + this->listavuelos + "" + this->listavuelos + " ";
}
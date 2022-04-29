#include "Aeropuerto.h"
#include <string>


using namespace std;

Aeropuerto::Aeropuerto( unsigned int _ID, unsigned int _capacidadaeropuerto, unsigned int _capacidadmax) {
	
	this->capacidadaeropuerto = _capacidadaeropuerto;
	this->ID = Aeropuerto::cont;
	Aeropuerto::cont = Aeropuerto::cont + 1;
	this->capacidadmax = _capacidadmax;
	
}
string Aeropuerto::to_string() {
	return std::to_string(this->ID) + " " + std::to_string(this->capacidadaeropuerto) + " ";
}

int Aeropuerto::getCont() {
	return Aeropuerto::cont;
}

void Aeropuerto::setCont(int aux) {
	
	Aeropuerto::cont = aux;
}

void Aeropuerto::DarPermiso() {
	bool aux = this->Hangar->Haycapacidad();
	if (!aux)
		throw("No hay capacidad en el Hangar");

}

void Aeropuerto::VerificarCondiciones(Avion* c) {
	bool aux = c->ChequearCargaMaxima();
	if (!aux)
		throw("No se cumplen las condiciones");
}
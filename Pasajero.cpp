#include "Pasajero.h"
#include <string>
#include <iostream>

using namespace std;


Pasajero::Pasajero(int _DNI, string _nombre, string _listavalijas, float _pesovalijas)
{

	this->DNI = _DNI;
	this->nombre = _nombre;
	this->fecha = NULL;
	this->numerovuelo = -1;
	//this->asientos = _asientos;
	this->listavalijas = _listavalijas;
	this->pesovalijas = _pesovalijas;


}
string Pasajero::to_string() {
	return std::to_string(this->DNI) + " " + this->nombre + " " + std::to_string(this->fecha)+""+ this->fecha + " " + std::to_string(this->numerovuelo) + " " + this->asientos + " " + this->listavalijas + " " + std::to_string(this->pesovalijas) + " ";
}

int Pasajero::getDNI() {
	return this->DNI;

}
void Pasajero::ImprimirPasajero() {
 cout << this->to_string();
}

int Pasajero::getPesoValija() {
	return this->pesovalijas;
}
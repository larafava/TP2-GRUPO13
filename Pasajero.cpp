#include "Pasajero.h"
#include <string>
#include <iostream>

using namespace std;


Pasajero::Pasajero(string _DNI, string _nombre, tm _fecha, string _listavalijas, float _pesovalijas)
{

	this->DNI = _DNI;
	this->nombre = _nombre;
	this->fecha = _fecha;
	this->numerovuelo = -1;
	//this->asientos = _asientos;
	this->listavalijas = _listavalijas;
	this->pesovalijas = _pesovalijas;


}
string Pasajero::to_string() {
	return this->DNI + " " + this->nombre + " " + std::to_string(this->fecha)+""+ this->fecha + " " + std::to_string(this->numerovuelo) + " " + this->asientos + " " + this->listavalijas + " " + std::to_string(this->pesovalijas) + " ";
}
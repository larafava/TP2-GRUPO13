#include "Pasajero.h"
#include <string>
#include <iostream>

using namespace std;


Pasajero::Pasajero(int _DNI, string _nombre)
{

	this->DNI = _DNI;
	this->nombre = _nombre;
	this->fecha = NULL;
	this->numerovuelo = -1;
	this->asientos = "";
	//se asume que puede llevar hasta 5 valijas
	this->listavalijas = new cListaValija(5);
	this->pesovalijas = 0;


}
string Pasajero::to_string() {
	return std::to_string(this->DNI) + " " + this->nombre  + " " + std::to_string(this->numerovuelo) + " " + this->asientos + " "  + " " + std::to_string(this->pesovalijas) + " ";
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

Pasajero::~Pasajero(){
	
}

string Pasajero::getAsiento() {
	return this->asientos;
}

void Pasajero::setAsiento(string asiento) {
	this->asientos = asiento;
}

void Pasajero::setFecha(cFecha* fecha) {
	this->fecha = fecha;
}

void Pasajero::AgregarEquipaje(cValija * c){
	this->listavalijas->Agregar(c);
}

void Pasajero::eliminarEquipaje(cValija * c){
	this->listavalijas->eliminar(this-listavalijas->getPos(c));
}
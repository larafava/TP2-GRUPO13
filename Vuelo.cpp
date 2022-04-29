#include "Vuelo.h"
#include <algorithm>
#include <string>
#include <iostream>
#include "Avion.h"


using namespace std;

Vuelo::Vuelo(unsigned int _numvuelo, string _estado) {
	this->numvuelo = _numvuelo;
	this->estado = _estado;
	this->avion = NULL;
}

string Vuelo::to_string() {
	
	return std::to_string(this->numvuelo) + " " + this->estado + " " + this->avion + " ";
}

/*void Vuelo::ArribarPista(int HoraBajada, int MinutoBajada) {
	int HoraSubida;
	int MinSubida;
	if (HoraSubida > HoraBajada)
		throw new runtime_error("Horario de bajada incorrecto");
	if (HoraSubida == HoraBajada)
	{
		if (MinSubida > MinutoBajada) {
			throw new runtime_error("Horario de bajada incorrecto");

		}
	}
	//cout<< this->ArribarPista+"Horario de aterrizaje: ";
}*/

int Vuelo::getPesoPasajero() {
	int PesoPasajero = 0;
	int i = 0;
	int j = this->Pasajeros->getOcupado();
	while (i < j) {
		PesoPasajero = PesoPasajero + this->Pasajeros->buscar(i)->getPesoValija()+75;
		i++;
	}
	return PesoPasajero;
}

void Vuelo::AgregarPasajero(Pasajero* c) {
	this->Pasajeros->Agregar(c);
}

void Vuelo::EliminarPasajero(Pasajero* c) {
	int aux = this->Pasajeros->BuscarPos(c->getDNI());
	this->Pasajeros->eliminar(aux);
}
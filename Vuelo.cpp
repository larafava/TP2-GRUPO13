#include "Vuelo.h"
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

Vuelo::Vuelo(unsigned int _numvuelo, string _estado, string _avion) {
	this->numvuelo = _numvuelo;
	this->estado = _estado;
	this->avion = _avion;
}

string Vuelo::to_string() {
	
	return std::to_string(this->numvuelo) + " " + this->estado + " " + this->avion + " ";
}

void Vuelo::ArribarPista(int HoraBajada, int MinutoBajada) {
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
}

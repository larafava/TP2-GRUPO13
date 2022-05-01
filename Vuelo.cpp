#include "vuelo.h"
#include <algorithm>
#include <string>
#include <iostream>


using namespace std;

Vuelo::Vuelo(int _numvuelo, string _estado) {
	this->numvuelo = _numvuelo;
	this->estado = _estado;
}
Vuelo::Vuelo(){
    
    this->Pasajeros = new ListaPasajeros(100);

}
string Vuelo::to_string() {
	
	return std::to_string(this->numvuelo) + " " + this->estado + " " ;
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
	c->setFecha(this->getHorarioArribo());
}

void Vuelo::EliminarPasajero(Pasajero* c) {
	int aux = this->Pasajeros->BuscarPos(c->getDNI());
	this->Pasajeros->eliminar(aux);
}

void Vuelo::CambiarPasajero(int pasajero1, int pasajero2) {
	Pasajero* aux1 =this->Pasajeros->buscar(pasajero1);
	Pasajero* aux2 = this->Pasajeros->buscar(pasajero2);
	if (aux1 != NULL && aux2 != NULL) {
		string aux3 = aux1->getAsiento();
		aux1->setAsiento(aux2->getAsiento());
		aux2->setAsiento(aux3);
	}
}

cFecha*Vuelo::getHorarioArribo() {
	return this->HorarioArribo;
}

int Vuelo::getPasajeros(){
    return this->Pasajeros->getOcupado();
}

#include "Aeropuerto.h"
#include <string>


using namespace std;
//defino un nuevo constructor
Aeropuerto::Aeropuerto(){
	this->Listavuelo = new cListavuelo(100);
	this->ID = Aeropuerto::cont;
	Aeropuerto::cont = Aeropuerto::cont + 1;
	this->capacidadmax = 20;
	this->Hangar = new cListaAvionesAeropuerto(20);

	this->despegueyaterrizaje = new cListaAvionesAeropuerto(1000);

	
}

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

void Aeropuerto::VerificarCondiciones(cAvion* c) {
	bool aux = c->ChequearCargaMaxima();
	if (!aux)
		throw("No se cumplen las condiciones");
}

void Aeropuerto::aterrizar(cAvion * avion){
	//SI hay capacidad lo agrego
	if(this->Hangar->Haycapacidad())
		(this->Hangar->Agregar(avion));
	//agrego el avion a la lista de despegue y aterrizajes
	this->despegueyaterrizaje->Agregar(avion);
	avion->getVuelo()->setEstado("tierra");
}

void Aeropuerto::despegar(cAvion * avion){
	if(avion->ChequearCargaMaxima())
	this->Hangar->Quitar(this->Hangar->getPosicion(avion));
		//agrego el avion a la lista de despegue y aterrizajes
	this->despegueyaterrizaje->Agregar(avion);
	avion->getVuelo()->setEstado("aire");
}


int Aeropuerto::calcularPasajerosDia(cFecha * dia ){
	int i;
	int toR = 0;
	for(i=0;i<this->despegueyaterrizaje->getOcupados();i++){
		cAvion * v = this->despegueyaterrizaje->obtener(i);
		//SI coinciden el mismo dia 
		if(v->getVuelo()->getHorarioArribo()->mismoDia(dia) 
		|| v->getVuelo()->getHorarioAterrizaje())
		 toR = toR+ v->getVuelo()->getPasajeros();
		
	}
}
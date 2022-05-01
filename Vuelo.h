#pragma once
#include <string>
#include "cFecha.h"
#include "listaPasajero.h"
#include "cAvion.h"
using namespace std;


class Vuelo {
	private:

 	int numvuelo;
	string estado;
	ListaPasajeros* Pasajeros;

	//Formato HH:MM
	cFecha* HorarioAterrizaje;

	//Formato HH:MM
	cFecha* HorarioArribo;


public:

	Vuelo( int _numvuelo, string _estado);
	~Vuelo();
	Vuelo();


	string to_string();
	void ArribarPista(int HoraBajada, int MinutoBajada);
	void AgregarPasajero(Pasajero*c);
	void CambiarPasajero(int pasajero1, int pasajero2);
	void EliminarPasajero(Pasajero*c);
    void setEstado(string estado);
	int getPesoPasajero();
	int getId();
    int getPasajeros();
	cFecha* getHorarioArribo();
    cFecha *getHorarioAterrizaje();
};

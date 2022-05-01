#pragma once
#include <string>
#include "cFecha.h"
#include "cListavalija.h"
#include "cValija.h"


class Pasajero {
	int DNI;
	string nombre;
	cFecha* fecha;
	int numerovuelo;
	string asientos;
	cListaValija* listavalijas;
	float pesovalijas;

public:
	Pasajero(int _DNI, string _nombre);
	~Pasajero();


	string to_string();
	void AgregarEquipaje(cValija * valija);
	void eliminarEquipaje(cValija * valija);
	int getDNI();
	void ImprimirPasajero();
	int getPesoValija();
	string getAsiento();
    void setAsiento(string asiento);
	void setFecha(cFecha* fecha);

};
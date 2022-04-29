#pragma once
#include <string>
#include "cFecha.h"


class Pasajero {
	int DNI;
	string nombre;
	cFecha* fecha;
	int numerovuelo;
	string asientos;
	string listavalijas;
	float pesovalijas;

public:
#pragma region Constructores y destructores
	Pasajero(int _DNI, string _nombre, string _listavalijas, float _pesovalijas);
	~Pasajero();

#pragma endregion

#pragma region Metodos
	string to_string();
	void AgregarEquipaje();
	int getDNI();
	void ImprimirPasajero();
	int getPesoValija();
};
#pragma once
#include <string>


class Pasajero {
	string DNI;
	string nombre;
	tm fecha;
	int numerovuelo;
	string asientos;
	string listavalijas;
	float pesovalijas;

public:
#pragma region Constructores y destructores
	Pasajero(string _DNI, string _nombre, tm _fecha, string _listavalijas, float _pesovalijas);
	~Pasajero();

#pragma endregion

#pragma region Metodos
	string to_string();
	void AgregarEquipaje();
};
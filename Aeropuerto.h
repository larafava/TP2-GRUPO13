#pragma once
#include <string>
#include <iostream>

using namespace std;

class Aeropuerto {
	static int  ID; //usar const ver como 
	unsigned int capacidadaeropuerto;
	string listavuelos;
	string listaaviones;

public:
#pragma region Constructores y destructores
	Aeropuerto( int _ID, unsigned int _capacidadaeropuerto, string _listavuelos, string _listaaviones);

	~Aeropuerto();

#pragma endregion

	#pragma region Metodos
	void DarPermiso();
	string to_string();

#pragma endregion
};
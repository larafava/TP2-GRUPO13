#pragma once
#include <string>

using namespace std;

class Vuelo {
	unsigned int numvuelo;
	string estado;
	string avion;

	//Formato HH:MM
	string HorarioAterrizaje;

	//Formato HH:MM
	string HorarioArribo;


public:

#pragma region Contructores y destructores
	Vuelo(unsigned int _numvuelo, string _estado, string _avion);
	~Vuelo();

#pragma endregion

#pragma region Metodos
	string to_string();
	void ArribarPista(int HoraBajada, int MinutoBajada);
	void AgregarPasajero();
	void CambiarPasajero();
	void EliminarPasajero();
};

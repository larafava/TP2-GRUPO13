#pragma once
#include <string>

using namespace std;

class Avion {
	unsigned int ID;
	int cantmaxpasajeros;
	int cantactualpasajeros;
	unsigned int pesomaxtotal;


#pragma region Constructores y destructores
	Avion(unsigned int _ID, int _cantmaxpasajeros, int _cantactualpasajeros, unsigned int _pesomaxtotal);
	~Avion();
#pragma endregion

#pragma region Metodos
	void ChequearCargaMaxima();
	string to_string();

};
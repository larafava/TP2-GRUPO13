#pragma once
#include "Vuelo.h"
#include <string>

using namespace std;

class Avion {
	Vuelo* Vuelo;
	unsigned int ID;
	int cantmaxpasajeros;
	int cantactualpasajeros;
	unsigned int pesomaxtotal;



public:
	Avion(unsigned int _ID, int _cantmaxpasajeros, int _cantactualpasajeros, unsigned int _pesomaxtotal);
	~Avion();



	bool ChequearCargaMaxima();
	string to_string();

};
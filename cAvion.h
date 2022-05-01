#pragma once
#include <string>
#include "Vuelo.h"
using namespace std;
class cAvion{
private:
    int ID;
	int cantmaxpasajeros;
	int cantactualpasajeros;
	int pesomaxtotal;
	Vuelo* Vuelo;



public:	
	cAvion();
	cAvion( int _ID, int _cantmaxpasajeros, int _cantactualpasajeros,  int _pesomaxtotal);
	~cAvion();
	bool ChequearCargaMaxima( );
	int getID();
	Vuelo* getVuelo();
	string to_string();


};
#pragma once
#include <string>
#include <iostream>
#include "Avion.h"

using namespace std;

class cListaAvionesAeropuerto {
	Avion** Lista;
	unsigned int ocupado;
	unsigned int capacidad;
    unsigned int max_capacidad;

public:
#pragma region Constructores y Destructores
	cListaAvionesAeropuerto(int l);
	~cListaAvionesAeropuerto();
#pragma endregion

#pragma region Metodos
	bool Agregar(Avion*d);
	bool Haycapacidad();
	int getOcupados();
	Avion* Quitar(int posicion);
	Avion* operator [] (int pos_i);
	void listar();


};
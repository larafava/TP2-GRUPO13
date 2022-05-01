#pragma once
#include <string>
#include <iostream>
#include "cAvion.h"

using namespace std;

class cListaAvionesAeropuerto {
	cAvion** Lista;
	unsigned int ocupado;
	unsigned int capacidad;
    unsigned int max_capacidad;

public:
#pragma region Constructores y Destructores
	cListaAvionesAeropuerto(int l);
	~cListaAvionesAeropuerto();
#pragma endregion

#pragma region Metodos
	bool Agregar(cAvion*d);
	bool Haycapacidad();
	int getOcupados();
	cAvion * obtener(int pos);
	cAvion* Quitar(int posicion);
	cAvion* operator [] (int pos_i);
	int getPosicion(cAvion * c);
	void listar();


};
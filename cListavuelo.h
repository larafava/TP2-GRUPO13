#pragma once
#include "vuelo.h"

using namespace std;
class cListavuelo {
	Vuelo** Lista;
	int ocupado;
	int capacidad;
	int max_capacidad;

public:
	cListavuelo(int l);
	~cListavuelo();

	bool Agregar(Vuelo* d);
	Vuelo* buscar(int id);
	Vuelo* Quitar(int posicion);
	Vuelo* operator [] (int pos_i);
	void listar();


};
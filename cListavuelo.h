#pragma once
#include "Vuelo.h"

using namespace std;
class cListavuelo {
	Vuelo** Lista;
	unsigned int ocupado;
	unsigned int capacidad;
	unsigned int max_capacidad;

public:
#pragma region Constructores y Destructores
	cListavuelo(int l);
	~cListavuelo();
#pragma endregion

#pragma region Metodos
	bool Agregar(Vuelo* d);
	Vuelo* buscar(int id);
	Vuelo* Quitar(int posicion);
	Vuelo* operator [] (int pos_i);
	void listar();


};
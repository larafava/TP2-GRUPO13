#pragma once
#include<iostream>
#include <string>

using namespace std;

class cValija {
	friend class cListaValijas;
private:
	float _peso;
	int _codigo;


public:
	cValija(float peso, int codigo);
	~cValija();
	float getPeso();
	int getCodigo();
	void imprimirValija();

};
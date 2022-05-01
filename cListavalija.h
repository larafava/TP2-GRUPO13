#pragma once
#include<iostream>
#include <string>
#include "cValija.h"

using namespace std;

class cListaValija {
private:
    cValija** Lista;
    int ocupados;
    int capacidad;
    const int max_peso = 25;
    int peso;


public:

    cListaValija(int l);
    ~cListaValija();
    bool Agregar(cValija* c);
    cValija* Quitar(int posicion);
    bool eliminar(int posicion);
    cValija* operator [] (int pos_i);
    cValija* buscar(int id);
    int getPos(cValija* c);
    //imprime la lista por pantalla
    void listar();
    



};
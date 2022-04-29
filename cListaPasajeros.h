#pragma once
#include "Pasajero.h"
using namespace std;

class cListaPasajeros {
private:
    Pasajero** Lista;
    unsigned int ocupados;
    unsigned int capacidad;
    

 


public:

    cListaPasajeros(int l);
    ~cListaPasajeros();
    bool Agregar(Pasajero* c);
    Pasajero* Quitar(int posicion);
    bool eliminar(int posicion);
  Pasajero* operator [] (int pos_i);
    Pasajero* buscar(int id);
    int BuscarPos(int id);
    int CantPasajeros();
    //imprime la lista por pantalla
    void listar();
    int getOcupado();



};
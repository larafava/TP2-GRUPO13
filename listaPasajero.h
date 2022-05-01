#pragma once
#include "Pasajero.h"
using namespace std;

class ListaPasajeros {
private:
    Pasajero** Lista;
    int ocupados;
    int capacidad;
    

 


public:

    ListaPasajeros(int l);
    ~ListaPasajeros();
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
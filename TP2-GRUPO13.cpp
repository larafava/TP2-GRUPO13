
#include <iostream>
#include "cFecha.h"
#include "Pasajero.h"
#include "cListavalija.h"
#include "cValija.h"
#include "cAvion.h"
#include "vuelo.h"
#include "cListaPasajeros.h"

using namespace std;
//sobrecarga del operador de impresion imprimo un vuelo
ostream& operator<<(ostream& os, Vuelo * v)
{
    os << "[";
    os << v->to_string();
    os << "]\n";
    return os;
}

//sobrecarga del operador suma

void operator + (Pasajero  &p,cValija  &x){
	p.AgregarEquipaje(&x);
	
}

void operator - (Pasajero  &p,cValija  &x){
	p.eliminarEquipaje(&x);
	
	
}

int main()
{
	//Creo las valijas para el pasajero
	cValija * valija1 = new cValija(12,1);
	cValija * valija2 = new cValija(12,1);
	//creo el pasajero
	Pasajero * pasajero1 = new Pasajero(3412332,"Oscar Perez");
	//agrego las valijas 
	pasajero1->AgregarEquipaje(valija1);
	pasajero1->AgregarEquipaje(valija2);
	//Creo un nuevo avion
	cAvion * avion = new cAvion(1,100,0,10000);



	//Creo el vuelo asociado al avion 
	//Le seteo el avion al vuelo



	delete valija1;
	delete valija2;
	delete pasajero1;
	delete avion;

}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

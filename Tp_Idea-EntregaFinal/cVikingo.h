#pragma once
#include "cDragon.h"
#include <string>
#include <iostream>
using namespace std;
enum Resul { APROBADO, PRIMERO, ULTIMO, ENTRENANDO };//el resto no puede porque sino es jinete 
class cVikingo
{
private:
	string Nombre_vikingo, Apellido_vikingo, Posicion_vikingo;
	int MagnitudVida, cantMuertes_Asociadas;
	Resul ResultadoEntrenamiento;
	string ElementoPP;
public:
	cVikingo(string Nombre, string Apellido, int Magnitud,Resul certificado, string elementoPP);
	

    //Trabajar: qué posición ocupa en la isla de Berk
	void ContratarVikingo(string Trabajo);
	
	// leer elemento de proteccion personal 
	string LeerElementoPP() { return ElementoPP; }
	
	

	//recibir golpe
	int ReciboDanios();

	//imprir
	string toString();
	~cVikingo();
};


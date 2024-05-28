#pragma once
class cDragon;
#include <string>
#include <iostream>
using namespace std;
class cVikingo
{
private:
	string Nombre_vikingo, Apellido_vikingo, Posicion_vikingo;
	int MagnitudVida, cantMuertes_Asociadas;

public:
	cVikingo(string Nombre, string Apellido, string Posicion,int Magnitud);
	//string LeerNombre();
	//string LeerApellido();
	//string LeerPosicion();
	void Trabajar(string Trabajo);//Trabajar: qué posición ocupa en la isla de Berk
	// void AtacarDragones(cDragon* dragoncitoamatar);
};


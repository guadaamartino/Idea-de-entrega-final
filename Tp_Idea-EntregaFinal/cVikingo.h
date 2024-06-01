#pragma once
class cDragon;
#include <string>
#include <iostream>
using namespace std;
enum Resul { APROBADO, PRIMERO, ULTIMO };//el resto no puede porque sino es jinete 
class cVikingo
{
private:
	string Nombre_vikingo, Apellido_vikingo, Posicion_vikingo;
	int MagnitudVida, cantMuertes_Asociadas;
	Resul ResultadoEntrenamiento;
public:
	cVikingo(string Nombre, string Apellido, int Magnitud,Resul certificado);
	//string LeerNombre();
	//string LeerApellido();
	//string LeerPosicion();
	void ContratarVikingo(string Trabajo);//Trabajar: qué posición ocupa en la isla de Berk
	// void AtacarDragones(cDragon* dragoncitoamatar);
	~cVikingo();
};


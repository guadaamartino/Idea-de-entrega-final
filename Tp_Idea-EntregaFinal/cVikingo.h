#pragma once
#include "cDragon.h"
#include <string>
#include <iostream>
using namespace std;
enum Resul { APROBADO, PRIMERO, ULTIMO, ENTRENANDO };//el resto no puede porque sino seria jinete 
class cVikingo
{
private:
	string Nombre_vikingo, Apellido_vikingo, Posicion_vikingo, Apodo_vikingo, carac_fisicas;
	const string FechadeNacimiento;
	int MagnitudVida, cantMuertes_Asociadas;
	Resul ResultadoEntrenamiento;
	string ElementoPP;
public:
	cVikingo(string Nombre, string Apellido, int Magnitud,Resul certificado, string elementoPP, string apodo, string caracteristicas, string fecha);
	

    //Trabajar: qué posición ocupa en la isla de Berk
	void ContratarVikingo(string Trabajo);
	
	// leer datos 
	string LeerElementoPP() { return ElementoPP; }
	string LeerNombre(){ return Nombre_vikingo; }
	string LeerApellido() { return Apellido_vikingo; }
	int LeerVida() { return MagnitudVida; }
	string LeerFechadeNacimiento() { return FechadeNacimiento; }
	string LeerApodo() { return Apodo_vikingo; }
	string LeerCaracteristicas() { return carac_fisicas; }
	void setMuerteNueva();
	void setApodoVikingo(string apodo);
	void setCaracteristicasFisicas(string caracteristicas);

	

	//recibir golpe
	int ReciboDanios(int Golpe);

	//imprir
	string toString();
	~cVikingo();
};


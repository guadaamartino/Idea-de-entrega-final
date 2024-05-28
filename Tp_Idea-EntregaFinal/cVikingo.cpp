#include "cVikingo.h"

cVikingo::cVikingo(string Nombre, string Apellido, string Posicion, int Magnitud)
{
	Nombre_vikingo = Nombre;
	Apellido_vikingo = Apellido;
	Posicion_vikingo = Posicion;
	MagnitudVida = Magnitud;
	cantMuertes_Asociadas = -1; //Negativo pq no mato a ningun dragon aun
}

void cVikingo::Trabajar(string Trabajo)
{
	Posicion_vikingo = Trabajo;
	cout << "Vikingo trabaja muy duro en la "<<Posicion_vikingo<<endl;
}

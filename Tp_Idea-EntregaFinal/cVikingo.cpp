#include "cVikingo.h"

cVikingo::cVikingo(string Nombre, string Apellido, int Magnitud, Resul certificado)//por defecto por parametros
{
	Nombre_vikingo = Nombre;
	Apellido_vikingo = Apellido;
	Posicion_vikingo = " ";//setearla cuando lo contratan
	MagnitudVida = Magnitud;
	cantMuertes_Asociadas = -1; //Negativo pq no mato a ningun dragon aun
	ResultadoEntrenamiento = certificado;
}

void cVikingo::ContratarVikingo(string Trabajo)//lo contratan
{
	Posicion_vikingo = Trabajo;
	cout << Nombre_vikingo <<"ha conseguido el trabajo como " << Posicion_vikingo << endl;
}

cVikingo::~cVikingo()
{
}

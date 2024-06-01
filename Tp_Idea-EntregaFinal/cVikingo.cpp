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

string cVikingo::toString()
{
	string resultado;
	switch (ResultadoEntrenamiento)
	{
	case APROBADO:
		resultado = "Aprobado";
		break;
	case PRIMERO:
		resultado = "Primero";
		break;
	case ULTIMO:
		resultado = "Ultimo";
		break;
	default:
		break;
	}
	return "Nombre del Vikingo: "+Nombre_vikingo+
		"\nApellido: "+Apellido_vikingo+
		"\nTrabaja en: "+Posicion_vikingo+
		"\nCantidad de vida: "+to_string(MagnitudVida)+
		"\nCantidad de muertes asociadas: "+to_string(cantMuertes_Asociadas)+
		"\nResultado de Entrenamiento con Bocon: "+resultado;
}

cVikingo::~cVikingo()
{
}

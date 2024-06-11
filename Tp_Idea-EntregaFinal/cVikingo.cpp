#include "cVikingo.h"

cVikingo::cVikingo(string Nombre, string Apellido, int Magnitud, Resul certificado, string elementoPP)//por defecto por parametros
{
	Nombre_vikingo = Nombre;
	Apellido_vikingo = Apellido;
	Posicion_vikingo = " ";//setearla cuando lo contratan
	MagnitudVida = Magnitud;
	cantMuertes_Asociadas = -1; //Negativo pq no mato a ningun dragon aun
	ResultadoEntrenamiento = certificado;
	ElementoPP = elementoPP;
}

void cVikingo::ContratarVikingo(string Trabajo)//lo contratan
{
	Posicion_vikingo = Trabajo;
	cout << Nombre_vikingo <<"ha conseguido el trabajo como " << Posicion_vikingo << endl;
}


void cVikingo::setMuerteNueva()
{
	if (cantMuertes_Asociadas == -1) {
		cantMuertes_Asociadas = 1; //la primera 
	}
	else {
		cantMuertes_Asociadas++;
	}
}

int cVikingo::ReciboDanios(int Golpe)
{
	
	MagnitudVida -= Golpe;
	if (MagnitudVida <= 0)
		return -1;
	else 
	   return 0;
    
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
	case ENTRENANDO:
		resultado = "Sigue entrenando";
	default:
		break;
	}
	string posicion = (Posicion_vikingo == " ") ? "No tiene trabajo aun" : Posicion_vikingo;
	return "Nombre del Vikingo: " + Nombre_vikingo +
		"\nApellido: " + Apellido_vikingo +
		"\nTrabaja en: " +posicion+
		"\nCantidad de vida: "+to_string(MagnitudVida)+
		"\nCantidad de muertes asociadas: "+to_string(cantMuertes_Asociadas)+
		"\nResultado de Entrenamiento con Bocon: "+resultado;
}

cVikingo::~cVikingo()
{
}

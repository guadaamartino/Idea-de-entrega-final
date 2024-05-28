#include "cDragon.h"

cDragon::cDragon( string Tamanio, string Color, int MagnitudVida)
{
	Nombre_dragon = " "; //el nombre lo asignamos con sus habilidades
	Taman_dragon = Tamanio;
	Color_dragon = Color;
	Estado_dragon = false; //0:false, 1:true. Nace sin que lo domen
	MisEstrategias = nullptr; //hasta que no este domado es null 
	VidaTotal = MagnitudVida;
}

/*Preguntar si lo podemos dejar*/
void cDragon::AltaNombre(const string& Habilidad1, const string& Habilidad2) //quisimos hacer una funcion original je
{

	string hab1, hab2;
	hab1 = (Habilidad1.length() >= 2) ? Habilidad1.substr(0, 2) : Habilidad1; // Cplusplus: substr(posicion de inicio, longitud)
	hab2 = (Habilidad2.length() >= 2) ? Habilidad2.substr(0, 2) : Habilidad2;// podemos hacer un try catch que muestre que agarra excepciones si nos mandan habilidad vacia
	string Nombrecito = hab1 + hab2 + "udo";
	Nombre_dragon = Nombrecito;

}

string cDragon::LeerNombreNuevo()
{
	if (Nombre_dragon != " ")
		return Nombre_dragon;
	else
		cout << "Seguimos estudiando las habilidades... Disculpe la demora" << endl;
	return " ";
}

void cDragon::SetEstadoDragon(bool estado)
{
	Estado_dragon = estado;
}

bool cDragon::IsDomado()
{
	return Estado_dragon;
}

void cDragon::setEstrategiaAtaque(cEntrenamiento* nuevaEstrategia)
{
	if (Estado_dragon == 1)
		MisEstrategias = nuevaEstrategia;
	else
		cout << "Oie, debe domarlo primero!" << endl;
		return;
}

void cDragon::setEstrategiaDefensa(cEntrenamiento* nuevaEstrategia)
{
	if (Estado_dragon == 1) //si esta domado 
		MisEstrategias = nuevaEstrategia;
	else
		cout << "Oie, debe domarlo primero!" << endl;
		return;
}

void cDragon::mostrarEstrategias() const
{
	if (MisEstrategias != nullptr)
		cout << MisEstrategias->GetMyEstrategia()<<endl; //esta funcion va a ir mostrando dependiendo donde este parado
	else
		cout << " No se ha domado aun... Puedes ser el primero. Ponte a Entrenarlo!"<<endl;
}

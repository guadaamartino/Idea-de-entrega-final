#include "cDragon.h"

cDragon::cDragon( string Tamanio, string Color, int MagnitudVida)
{
	Nombre_dragon = " "; //el nombre lo asignamos con sus habilidades
	Taman_dragon = Tamanio;
	Color_dragon = Color;
	Estado_dragon = false; //0:false, 1:true. Nace sin que lo domen
	MiDefensa = nullptr;//hasta que no este domado es null
	MiAtaque = nullptr;
	VidaTotal = MagnitudVida;
}

/*Preguntar si lo podemos dejar*/
void cDragon::AltaNombre(const string& Habilidad1, const string& Habilidad2) //quisimos hacer una funcion original je
{

	string hab1, hab2;
	hab1 = (Habilidad1.length() >= 3) ? Habilidad1.substr(0, 3) : Habilidad1; // Cplusplus: substr(posicion de inicio, longitud)
	hab2 = (Habilidad2.length() >= 2) ? Habilidad2.substr(0, 2) : Habilidad2;// podemos hacer un try catch que muestre que agarra excepciones si nos mandan habilidad vacia
	string Nombrecito = hab1 + hab2 + "elo";
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

void cDragon::setEstrategiaAtaque(cEntrenamiento* newAtaque)
{
	if (Estado_dragon == true) {//si esta domado
      
		cFormadeAtaque* IsAtaque = dynamic_cast<cFormadeAtaque*>(newAtaque);// donde pongo el delete de IsAtaque???
	  if (IsAtaque != nullptr)
		  MiAtaque = newAtaque;
	  else
		  throw new exception("Error: Se ha proporcionado un ataque invalido. ");
	}
	else
	{
		std::cout << "Este dragon no esta domado. ¿Que esperas? ¡Es tu oportunidad!" << std::endl;
	}
	
}

void cDragon::setEstrategiaDefensa(cEntrenamiento* newDefensa)
{
	if (Estado_dragon == true) {//si esta domado
		cFormaDefensa* IsDefensa= dynamic_cast<cFormaDefensa*>(newDefensa);// donde pongo el delete de IsDefensa???
		if (IsDefensa != nullptr)
			MiDefensa = newDefensa;
		else
			throw new exception("Error: Se ha proporcionado una defensa invalida. ");
	}
	else
	{
		std::cout << "Este dragon no esta domado. ¿Que esperas? ¡Es tu oportunidad!" << std::endl;
	}
}

void cDragon::mostrarEstrategias() const
{
	// Mostrar los entrenamientos establecidos
	std:: cout << "Estado actual de los entrenamientos:" << std:: endl;
	if (MiAtaque != nullptr) {
		std::cout << "Estrategia de ataque: " << MiAtaque->GetMyEstrategia() << std::endl;
	}
	else {
		std::cout << "No se ha establecido una estrategia de ataque." << std::endl;
	}
	if (MiDefensa != nullptr) {
		cout << "Estrategia de defensa: " << MiDefensa->GetMyEstrategia() << endl;
	}
	else {
		cout << "No se ha establecido una estrategia de defensa." << endl;
	}
}

string cDragon::toString() const
{
	string estado = Estado_dragon ? "Domado" : "No domado";
	string defensa = MiDefensa ? MiDefensa->GetMyEstrategia() : "Sin estrategia de defensa";//por si son nullptr
	string ataque = MiAtaque ? MiAtaque->GetMyEstrategia() : "Sin estrategia de ataque";
	return "Nombre: " + Nombre_dragon + "\n"
		+ "Tamanio: " + Taman_dragon + "\n"
		+ "Color: " + Color_dragon + "\n"
		+ "Estado: " + estado + "\n"
		+ "Defensa: " + defensa + "\n"
		+ "Ataque: " + ataque + "\n"
		+ "Vida total: " + to_string(VidaTotal);//convierto numero a su cadena de texto equivalente. 
}




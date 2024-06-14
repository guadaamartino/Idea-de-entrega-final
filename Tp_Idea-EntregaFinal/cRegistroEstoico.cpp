#include "cRegistroEstoico.h"
void AgregarVida(cDragon* dragonacurar) { dragonacurar->SetVidaTotal(20000); }

cRegistroEstoico::cRegistroEstoico()
{
	//inician todas en 0
}

void cRegistroEstoico::operator+(cDragon* dragoncito) {
	if (dragoncito != nullptr) {
		Dragoncitos.push_back(dragoncito);
	}
	else {
		return;//no se carga
	}
}

void cRegistroEstoico::operator-(cDragon* quito_dragon) {
	for (list<cDragon*>::iterator it = Dragoncitos.begin(); it != Dragoncitos.end(); ++it) {
		if (*it == quito_dragon) {
			Dragoncitos.erase(it);
			break;
		}
	}
}

void cRegistroEstoico::ListarDragonesNODOMADOS()
{
	list<cDragon*>::iterator it;
	for (it = Dragoncitos.begin(); it != Dragoncitos.end(); it++) {
		if ((*it)->IsDomado() == false) {//verifico que no este domado
			std::cout << (*it)->LeerNombreNuevo()<< std::endl;
		}

	}
	return;

}

void cRegistroEstoico::ListarDragones()
{
	list<cDragon*>::iterator it;
	for (it = Dragoncitos.begin(); it != Dragoncitos.end(); it++) {
		
	 std::cout << (*it)->toString() << std::endl;

	}
	return;
}

void cRegistroEstoico::operator+(cJinete* jinetito) {
	if (jinetito != nullptr) {
		Jinetitos.push_back(jinetito);
	}
	else {
		return; //no se carga
	}
}


void cRegistroEstoico::operator-(cJinete* quito_jinete) {
	for (list<cJinete*>::iterator it = Jinetitos.begin(); it != Jinetitos.end(); ++it) {
		if (*it == quito_jinete) {
			Jinetitos.erase(it);
			break;
		}
	}
}

void cRegistroEstoico::ListarJinetes()
{
	list<cJinete*>::iterator it;
	for (it = Jinetitos.begin(); it != Jinetitos.end(); it++) {
		std::cout << (*it)->LeerNombre() << std::endl;
	}
	return;
}


void cRegistroEstoico::operator+(cVikingo* vikinguito) {
	if (vikinguito != nullptr) {
		Vikinguitos.push_back(vikinguito);
	}
	else {
		return;//no se carga
	}
}

void cRegistroEstoico::ListarVikingos()
{
	list<cVikingo*>::iterator it;
	for (it = Vikinguitos.begin(); it != Vikinguitos.end(); it++) {
		std::cout << (*it)->LeerNombre() << std::endl;
	}
	return;
}

void cRegistroEstoico::ListarCiudadanos()
{
	list<cVikingo*>::iterator it1;
	for (it1 = Vikinguitos.begin(); it1 != Vikinguitos.end(); it1++) {
		std::cout << (*it1)->toString() << std::endl;
	}
	list<cJinete*>::iterator it;
	for (it = Jinetitos.begin(); it != Jinetitos.end(); it++) {
		std::cout << (*it)->toString() << std::endl;
	}
	return;
}

void cRegistroEstoico::operator-(cVikingo* quito_vikingo)
{
	if(quito_vikingo!=nullptr){
	list<cVikingo*>::iterator itEnVikingos;
	 for (itEnVikingos = Vikinguitos.begin(); itEnVikingos != Vikinguitos.end(); itEnVikingos++) {
		//primero chequear si esta  
		if ((*itEnVikingos)->LeerNombre() == quito_vikingo->LeerNombre()) { //se encuentra
			Vikinguitos.erase(itEnVikingos);//se elimina
			return;
		}
	 }
	 if (itEnVikingos == Vikinguitos.end()) {
		 //llego al final y no lo encontro
		 throw new exception("Ese vikingo no pertenece a nuestra isla, Lo siento");
	 }
    }
	else {
		throw new exception("Se ha pasado algo nulo");
	}
}

void cRegistroEstoico::VikingoAJinete(int index, cJinete* jineteNuevo)
{
	if (index <0 || index >= Vikinguitos.size()) {
		throw new exception("Fuera del rango de la lista de vikingos");
	}
	list<cVikingo*>::iterator itViking = Vikinguitos.begin();
	for (int i = 0; i < index; i++)
		itViking++;

	cVikingo* vikingo = *itViking;

	//Asigno atributos desde vikingo a jinete
	jineteNuevo->setNombre(vikingo->LeerNombre());
	jineteNuevo->setApellido(vikingo->LeerApellido());
	jineteNuevo->incorporarPrimerDragon(nullptr);
	jineteNuevo->incorporarSegundoDragon(nullptr);//se asigna desp
	jineteNuevo->setApodo(vikingo->LeerApodo());
	jineteNuevo->setCaracteristicas(vikingo->LeerCaracteristicas());
	jineteNuevo->setFechadeNacimiento(vikingo->LeerFechadeNacimiento());

	int Resul = rand() % 2;//entre 0 y 1
	if(Resul==0)
	  jineteNuevo->setResultadoEntrenamiento(NO_ASISTIO);
	else
	  jineteNuevo->setResultadoEntrenamiento(DESAPROBADO);
	//el resto seteo en main
	//Elimino vikingo de la lista 
	*this - vikingo;

	//Agrego el jinete nuevo
	Jinetitos.push_back(jineteNuevo);

}




void cRegistroEstoico::GuerraDragonesVikingos()
{

	cout << "Comienza la guerra" << endl;
	srand(time(0));
	list<cDragon*>::iterator itDragones;
	list<cVikingo*>::iterator itVikingos;

	for (itVikingos = Vikinguitos.begin(); itVikingos != Vikinguitos.end();)
	{
		if (Vikinguitos.size() <= 5)
			break; // quedan menos de cinco vikingos y voy a tener que usarlos

		bool vikingoMuerto = false;

		for (itDragones = Dragoncitos.begin(); itDragones != Dragoncitos.end();)
		{
			bool dragonMuerto = false;

			if (!(*itDragones)->IsDomado())
			{
				if ((*itVikingos)->LeerElementoPP() == (*itDragones)->MostrarDebilidad())
				{
					int GolpeRecibido = rand() % 60001; // entre 0 y 60000
					int resul = (*itDragones)->ReciboDanio(GolpeRecibido);
					if (resul == -1)
					{
						itDragones = Dragoncitos.erase(itDragones); // muere dragón
						(*itVikingos)->setMuerteNueva();
						dragonMuerto = true;
					}
				}
				else
				{
					int GolpeRecibido = rand() % 20001; // entre 0 y 20000
					int resul = (*itVikingos)->ReciboDanios(GolpeRecibido);
					if (resul == -1)
					{
						itVikingos = Vikinguitos.erase(itVikingos); // muere vikingo
						vikingoMuerto = true;
						break; // salir del bucle de dragones y avanzar al siguiente vikingo
					}
				}
			}

			if (!dragonMuerto)
				++itDragones;
		}

		if (!vikingoMuerto)
			++itVikingos;
	}
}

void cRegistroEstoico::BatallaFinal(cDragon* Reina)
{
	srand(time(0));
	int acumVidasTotales = 0;
	list<cDragon*>::iterator itDragones;
	for (itDragones = Dragoncitos.begin(); itDragones != Dragoncitos.end(); itDragones++) {
		acumVidasTotales += (*itDragones)->leerVidaTotal();
	}
	list<cVikingo*>::iterator itVikingos;
	for (itVikingos = Vikinguitos.begin(); itVikingos != Vikinguitos.end(); itVikingos++) {
		acumVidasTotales += (*itVikingos)->LeerVida();
	}


	while (Reina->leerVidaTotal() >= 0) {
        int GolpeReina=rand()%50000;
		int GolpeDelPueblo = rand() % 500000;

		if (GolpeReina >= acumVidasTotales) {
			//final triste
			std::cout << "Final Triste. Muerte Verde ha vencido a todos los habitantes." << std::endl;
			return;
		}
		else if(GolpeDelPueblo>=Reina->leerVidaTotal()) {
			//final feliz
			Reina->ReciboDanio(GolpeDelPueblo);
			std::cout << "Final Feliz. Han logrado matar a Muerte Verde" << std::endl;
			return;
		}
	}
	
	

	
}


void cRegistroEstoico::RealizarCuracion(cDragon* dragonacurar) {
	list<cDragon*>::iterator itDragones;
	for (itDragones = Dragoncitos.begin(); itDragones != Dragoncitos.end(); itDragones++) {
		if ((*itDragones) == dragonacurar) {//me fijo que este en la lista
			AgregarVida((*itDragones));
			return;
		}
	}
	if(itDragones==Dragoncitos.end())
    {
	    throw new exception("No se encontro al dragon que se quiere curar");
	}
	
}
cRegistroEstoico::~cRegistroEstoico()
{
}


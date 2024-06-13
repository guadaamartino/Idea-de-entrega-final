#include "cRegistroEstoico.h"
void AgregarVida(cDragon* dragonacurar) { dragonacurar->SetVidaTotal(20000); }

cRegistroEstoico::cRegistroEstoico()
{
	//inician todas en 0
}

void cRegistroEstoico::CargarDragon(cDragon* dragoncito)
{
	if (dragoncito != nullptr) {
		Dragoncitos.push_back(dragoncito);
	}
	else {
		return;//no se carga
	}
}

void cRegistroEstoico::ListarDragonesNODOMADOS()
{
	list<cDragon*>::iterator it;
	for (it = Dragoncitos.begin(); it != Dragoncitos.end(); it++) {
		if ((*it)->IsDomado() == false) {//verifico que no este domado
			std::cout << (*it)->toString() << std::endl;
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

void cRegistroEstoico::CargarJinete(cJinete* jinetito)
{
	if (jinetito != nullptr) {
		Jinetitos.push_back(jinetito);
	}
	else {
		return; //no se carga
	}
}

void cRegistroEstoico::ListarJinetes()
{
	list<cJinete*>::iterator it;
	for (it = Jinetitos.begin(); it != Jinetitos.end(); it++) {
		std::cout << (*it)->toString() << std::endl;
	}
	return;
}

void cRegistroEstoico::CargarVikingo(cVikingo* vikinguito)
{
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
		std::cout << (*it)->toString() << std::endl;
	}
	return;
}


/*
cVikingo* cRegistroEstoico::operator[](int index)
{
	if (index > Vikinguitos.size()) {
		throw new exception("No esta definida la lista en ese punto");
	}
	else {
		int contador = 0;
		list<cVikingo*>::iterator itVikingos;
		for (itVikingos = Vikinguitos.begin(); itVikingos != Vikinguitos.end(); itVikingos++) {
			contador++;
			if (contador == index) {
				return *itVikingos;
			}
		}
		if (itVikingos == Vikinguitos.end()) {
			throw new exception("No se encontro vikingo en esa posicion");
		}
	}
}

*/



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


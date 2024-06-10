#include "cRegistroEstoico.h"

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

void cRegistroEstoico::GuerraDragonesVikingos()
{
	cout << "Comienza la guerra" << endl;
	
	list<cDragon*>::iterator itDragones;
	list<cVikingo*>::iterator itVikingos;
	for(itVikingos=Vikinguitos.begin();itVikingos!=Vikinguitos.end();itVikingos++){//recorro lista vikingos
		if (Vikinguitos.size() <= 2)
			break; //quedan menos de dos vikingos y voy a tener que usarlos
	  for (itDragones = Dragoncitos.begin(); itDragones != Dragoncitos.end(); itDragones++) {//recorro lista dragones
		  if (!(*itDragones)->IsDomado()) {//si no esta domado
			  if ((*itVikingos)->LeerElementoPP() == (*itDragones)->MostrarDebilidad()) {
				  //el vikingo tiene ventaja
				 int resul=(*itDragones)->ReciboDanio();
				 if (resul == -1) 
					 Dragoncitos.erase(itDragones);// muere dragon  
			  }
			  else if ((*itVikingos)->LeerElementoPP() != (*itDragones)->MostrarDebilidad()) {
				  int resul=(*itVikingos)->ReciboDanios();
				  if (resul == -1)
					  Vikinguitos.erase(itVikingos); //muere vikingo
			  }
		  }
	  }
	}
}

cRegistroEstoico::~cRegistroEstoico()
{
}


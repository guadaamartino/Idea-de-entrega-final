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

cRegistroEstoico::~cRegistroEstoico()
{
}


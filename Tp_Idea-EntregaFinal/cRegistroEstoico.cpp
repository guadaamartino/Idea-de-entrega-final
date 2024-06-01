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

}


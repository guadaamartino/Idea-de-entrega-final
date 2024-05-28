#pragma once
#include "cVikingo.h"
#include "cJinete.h"
#include <list>
#include <iostream>
using namespace std;

class cRegistroEstoico
{
	list <cDragon*> ListaDragones;
	list <cJinete*> ListaJinetes;
	list <cVikingo*> ListaVikingos;

 // agregar a la lista de dragones
 //eliminar en la lista de dragones
 // agregar a la lista de Jinetes
 // eliminar en la lista de jinetes
// agregar a la lista de vikingos
// eliminar en la lista de vikingos
/*
funcion guera : Se recorre lista de vikingos y lista de dragones con ambos iteradores. si la debilidad del dragon coincide con el epp del vikingo gana vikingo
(funcion atacar dragon) si no gana dragon (funcion atacar vikingo) que ambos devuelvan la vida restante del golpeado y si es negativo eliminarlo de la lista.
*/
/*
funcion mostrar registro: recorrer lista de dragones e ir imprimiendo sus datos. si esta domado, recorrer lista de jinetes a ver si tienen su nombre
asignado, si lo tienen imprimir nombre del jinete.
*/
};


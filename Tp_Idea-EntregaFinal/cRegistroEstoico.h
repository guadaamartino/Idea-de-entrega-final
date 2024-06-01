#pragma once
#include "cVikingo.h"
#include "cJinete.h"
#include <list>
#include <iostream>
using namespace std;

class cRegistroEstoico
{
	list <cDragon*> Dragoncitos;
	list <cJinete*> Jinetitos;
	list <cVikingo*> Vikinguitos;
public:
    cRegistroEstoico();
    void CargarDragon(cDragon* dragoncito);
    void ListarDragonesNODOMADOS();
    void quitar_dragon(cDragon* quito_dragon);
    void CargarJinete(cJinete* jinetito);
    void quitar_jinete(cJinete* quito_jinete);
    void ImprimirLista();/*Nuestra idea es que la lista de jinetes SOLO contenga aquellos que domaron a algun dragon.
   // De esta manera listar todos los dragones y aquellos domados buscarlos en la lista de jinetes para ver quien fue el q los domo*/
    ~cRegistroEstoico();
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


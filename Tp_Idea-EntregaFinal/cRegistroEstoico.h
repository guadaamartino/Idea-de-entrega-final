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
    
    //por defecto

    //agregar a las listas. 
    void operator+(cDragon* dragoncito);
    void operator+(cJinete* jinetito);
    void operator+(cVikingo* vikinguito);
 
  
    //listar
    void ListarDragonesNODOMADOS();
    void ListarDragones();
    void ListarJinetes();
    void ListarVikingos();
    void ListarCiudadanos();

   
    //eliminar de las listas. 
    void operator-(cDragon* quito_dragon);
    void operator-(cVikingo* quito_vikingo);
    void operator-(cJinete* quito_jinete);

    //de vikingo a jinete
    void VikingoAJinete(int index,cJinete* jineteNuevo);

    //guerras
    void GuerraEntreDragones();
    void GuerraDragonesVikingos();
    void BatallaFinal(cDragon* Reina);

    //curadas
    void RealizarCuracion(cDragon* dragonacurar);
    
    ~cRegistroEstoico();

};

 

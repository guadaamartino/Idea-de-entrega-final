#pragma once
#include <iostream>
#include <string>
#include "cEntrenamiento.h"
using namespace std;
class cDragon
{
protected: //hago protected para que sean accesibles desde clases hijas
	string Nombre_dragon, Taman_dragon, Color_dragon;
	bool Estado_dragon; //domado o no
	cEntrenamiento* MisEstrategias;//puntero que apunta a las estrategias de ataque y defensa (inicia NULL)
	int VidaTotal;
public:
	//constructor por defecto
	cDragon() {};
	//constructor con parametros
	cDragon(string Tamanio, string Color,int MagnitudVida);

    //alta nombre: estudiadas sus habilidades se le asigna un nombre
	void AltaNombre(const string& Habilidad1,const string& Habilidad2);

	//mostrar ese nombre generado
	string LeerNombreNuevo();

	// domar al dragon
	void SetEstadoDragon(bool estado);

	// leer si esta domado 
	bool IsDomado();

	//entrenar: Una vez domado el dragon desarrolla estrategias de ataque y defensa
	void setEstrategiaAtaque(cEntrenamiento* nuevaEstrategia);
	void setEstrategiaDefensa(cEntrenamiento* nuevaEstrategia);

	//leer mis estrategias
	void mostrarEstrategias() const;

	//leer caracteristica de cada derivada 
	virtual string MostrarCaracteristica() { return " "; }
	
	//leer debilidad de cada derivada
	virtual string MostrarDebilidad() { return " "; }

	//destructor: Se libera la memoria del dragon
	virtual ~cDragon() {};

};


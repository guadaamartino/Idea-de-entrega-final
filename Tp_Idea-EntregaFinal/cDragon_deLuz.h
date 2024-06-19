#pragma once
#include "cDragon.h"
class cDragon_deLuz : public cDragon
{
	static string Caracteristica_Dragon;
	static string Debilidad_Dragon;
public:
	cDragon_deLuz(string Tamanio, string Color, int MagnitudVida);
	string MostrarCaracteristica() { return Caracteristica_Dragon; }
	string MostrarDebilidad() { return Debilidad_Dragon; }
};


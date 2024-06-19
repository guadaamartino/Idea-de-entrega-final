#pragma once
#include "cDragon.h"
class cDragon_deAgua : public cDragon
{
private:
	static string Caracteristica_Dragon;
	static string Debilidad_Dragon;
public:
	cDragon_deAgua(string Tamanio, string Color, int MagnitudVida);
	string MostrarCaracteristica() { return Caracteristica_Dragon; }
	string MostrarDebilidad() { return Debilidad_Dragon; }
};



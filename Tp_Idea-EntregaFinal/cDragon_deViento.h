#pragma once
#include "cDragon.h"
class cDragon_deViento : public cDragon
{
private:
	static string Caracteristica_Dragon;
	static string Debilidad_Dragon;
public:
	cDragon_deViento(string Tamanio, string Color, int MagnitudVida);
	string MostrarCaracteristica() { return Caracteristica_Dragon; }
	string MostrarDebilidad() { return Debilidad_Dragon; }
};



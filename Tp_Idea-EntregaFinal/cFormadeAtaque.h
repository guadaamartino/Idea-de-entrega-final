#pragma once
#include "cEntrenamiento.h"
/* CLASE DERIVADA CONCRETA */
class cFormadeAtaque: public cEntrenamiento
{
private:
	string MyAtaque;
public:
	cFormadeAtaque();
	void SetMyEstrategia(const string& nuevaEstrategia);
	string GetMyEstrategia();
	~cFormadeAtaque();
};


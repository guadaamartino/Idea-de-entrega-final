#pragma once
#include "cEntrenamiento.h"

/* CLASE DERIVADA CONCRETA */
class cFormaDefensa: public cEntrenamiento
{
private:
	string MyDefensa;
public:
	cFormaDefensa();
	void SetMyEstrategia(const string& nuevaEstrategia);
	string GetMyEstrategia();
	~cFormaDefensa();
};


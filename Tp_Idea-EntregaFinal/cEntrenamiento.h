#pragma once
#include <iostream>
#include <string>
using namespace std;
/* CLASE ABSTRACTA,no hay objetos de esta clase */
class cEntrenamiento
{
public:
	cEntrenamiento() {};
	/* metodos virtuales puros: */
	virtual void SetMyEstrategia(const string& nuevaEstrategia) = 0;//lo pasado por parametros no se modifica en la funcion. La funcion va a ser redefinida en cada derivada.
	virtual string GetMyEstrategia() = 0;
	virtual ~cEntrenamiento() {};// virtual para encargarme que el llamado a los destructores es en el orden correcto
};


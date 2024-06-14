#pragma once
#include <iostream>
#include <string>
#include "cEntrenamiento.h"
#include "cFormadeAtaque.h"
#include "cFormaDefensa.h"
#include <ctime>
using namespace std;
class cDragon
{
protected: //hago protected para que sean accesibles desde clases hijas
	string Nombre_dragon, Taman_dragon, Color_dragon;
	bool Estado_dragon; //domado o no
	//punteros que apuntan a estrategias de ataque y defensa (inicia NULL)
	cEntrenamiento* MiDefensa;
	cEntrenamiento* MiAtaque;
	int VidaTotal;

public:
	//constructor por defecto
	cDragon() {};
	//constructor con parametros
	cDragon(string Tamanio, string Color,int MagnitudVida);
	
    //alta nombre: estudiadas sus habilidades se le asigna un nombre
	void AltaNombre(const string& Habilidad1,const string& Habilidad2);
	void AltaNombreReina(string NombreReina);
	//mostrar ese nombre generado
	string LeerNombreNuevo();

	// domar al dragon
	void SetEstadoDragon(bool estado);

	// leer si esta domado 
	bool IsDomado();

	//entrenar: Una vez domado el dragon desarrolla estrategias de ataque y defensa
	void setEstrategiaAtaque(cEntrenamiento* newAtaque);
	void setEstrategiaDefensa(cEntrenamiento* newDefensa);

	//leer mis estrategias
	void mostrarEstrategias() const;

	//leer vidatotal
	int leerVidaTotal() { return VidaTotal; }
	//set vidatotal
	void SetVidaTotal(int cant) { VidaTotal += cant; }

	//leer caracteristica de cada derivada 
	virtual string MostrarCaracteristica() { return ""; }

	//leer debilidad de cada derivada
	virtual string MostrarDebilidad() { return ""; };

	//recibir golpe
	int ReciboDanio(int GolpeRecibido);
	//metodo to_string
	string toString() const;

	//operator ==
	bool operator==(cDragon* otro);

	//curandero para chimuelo
	friend void AgregarVida(cDragon* dragonacurar);
	//destructor: Se libera la memoria del dragon
	virtual ~cDragon() {};

};


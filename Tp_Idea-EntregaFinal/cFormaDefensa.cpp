#include "cFormaDefensa.h"

cFormaDefensa::cFormaDefensa()
{
	MyDefensa = " ";
}

void cFormaDefensa::SetMyEstrategia(const string& nuevaEstrategia)
{
	MyDefensa = nuevaEstrategia;

}

string cFormaDefensa::GetMyEstrategia()
{
	return MyDefensa;
}

cFormaDefensa::~cFormaDefensa()
{

}

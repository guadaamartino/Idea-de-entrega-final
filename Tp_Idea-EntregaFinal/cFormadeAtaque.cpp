#include "cFormadeAtaque.h"

cFormadeAtaque::cFormadeAtaque()
{
	MyAtaque = " ";
}

void cFormadeAtaque::SetMyEstrategia(const string& nuevaEstrategia)
{
	MyAtaque = nuevaEstrategia;
}

string cFormadeAtaque::GetMyEstrategia()
{
	return MyAtaque;
}

cFormadeAtaque::~cFormadeAtaque()
{

}


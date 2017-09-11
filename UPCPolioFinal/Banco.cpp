#include "Banco.h"

CBanco::CBanco()
{
	Dinero = 500000;
	NPropiedades = 14;
}


CBanco::~CBanco()
{
}

long int CBanco::Get_Dinero() { return Dinero; }
void CBanco::Set_Dinero(long int value) { Dinero = value; }
void CBanco::Set_NPropiedades(int value) { NPropiedades = value; }
vector<CPropiedad*> CBanco::Get_Propiedades() { return Propiedades; }
int CBanco::Get_NPropiedades() { return NPropiedades; }

void CBanco::CobrarJugador(CJugador *oJugador, long int cantidad) {

	Dinero += cantidad;
	oJugador->Set_Dinero(oJugador->Get_Dinero() - cantidad);
}

void CBanco::EntregarEntrada(CJugador *oJugador) {

	oJugador->Set_Dinero(oJugador->Get_Dinero() + 10000);
	Dinero -= 10000;
}

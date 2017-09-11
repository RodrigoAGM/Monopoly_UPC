#pragma once
#include "Jugador.h"
#include "Propiedad.h"
#include <vector>

using namespace std;

class CBanco
{
private:

	long int Dinero;
	vector<CPropiedad*> Propiedades;
	int NPropiedades;

public:

	CBanco();
	~CBanco();

	long int Get_Dinero();
	void Set_Dinero(long int value);
	void Set_NPropiedades(int value);
	vector<CPropiedad*> Get_Propiedades();
	int Get_NPropiedades();
	void CobrarJugador(CJugador *oJugador, long int cantidad);
	void EntregarEntrada(CJugador *oJugador);
};
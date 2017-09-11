#pragma once
#include "Propiedad.h"
#include "Gestor.h"
#include "Banco.h"
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class CGestor
{
private:

	CJugador *Jugador1;
	CJugador *Jugador2;
	CBanco *Banco;
	vector<CPropiedad*> Propiedades;

public:

	CGestor(CJugador *J1, CJugador *J2);
	~CGestor();
	void CargarPropiedades();
	CJugador *Get_Jugador1();
	CJugador *Get_Jugador2();
	CBanco *Get_Banco();
	CPropiedad *Get_Propiedad(int xM, int yM, string nom);
	vector<CPropiedad*> Get_Propiedades_Jugador(CJugador *obj);
	vector<CPropiedad*> Get_Vector();
	int Dado();
	void Derecho_de_Paso(CJugador* paga, CJugador* recibe);
	void Comprar_Propiedad(CJugador *j1);
	void Pagar_Penalidad(CJugador *j1);
	int Calcular_Impuestos(CJugador *j1);
	void Pagar_Impuestos(CJugador* j1);
};
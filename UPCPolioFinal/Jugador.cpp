#include "Jugador.h"



CJugador::CJugador(string nom, string fic)
{
	Nombre = nom;
	Ficha = fic;
	Dinero = 150000;
	EnCarcel = false;
	NPropiedades = 0;
	x = 0;
	y = 0;
	xM = 0;
	yM = 4;
	dx = 0;
	dy = 0;
}


CJugador::~CJugador()
{
}


int CJugador::Get_x() { return x; }
int CJugador::Get_y() { return y; }
int CJugador::Get_xM() { return xM; }
int CJugador::Get_yM() { return yM; }
double CJugador::Get_dx() { return dx; }
double CJugador::Get_dy() { return dy; }
void CJugador::Set_x(int value) { x = value; }
void CJugador::Set_y(int value) { y = value; }
void CJugador::Set_xM(int value) { xM = value; }
void CJugador::Set_yM(int value) { yM = value; }
void CJugador::Set_dx(double value) { dx = value; }
void CJugador::Set_dy(double value) { dy = value; }
long int CJugador::Get_Dinero() { return Dinero; }
bool CJugador::Get_EnCarcel() { return EnCarcel; }
int CJugador::Get_NPropiedades() { return NPropiedades; }
string CJugador::Get_Nombre() { return Nombre; }
string CJugador::Get_Ficha() { return Ficha; }
void CJugador::Set_Dinero(long int din) { Dinero = din; }
void CJugador::Set_EnCarcel(bool value) { EnCarcel = value; }
void CJugador::Set_NPropiedades(int value) { NPropiedades = value; }
void CJugador::Set_Nombre(string value) { Nombre = value; }

void CJugador::Agregar_Propiedades(CPropiedad* obj) {

	Propiedades.push_back(obj);
}
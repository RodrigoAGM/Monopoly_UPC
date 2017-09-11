#include "Propiedad.h"


CPropiedad::CPropiedad(string nom, long int pre, string dueno)
{
	Nombre = nom;
	Precio = pre;
	Comprado = false;
	Dueno = dueno;
}


CPropiedad::~CPropiedad()
{
}

string CPropiedad::Get_Nombre() { return Nombre; }
string CPropiedad::Get_Dueno() { return Dueno; }
long int CPropiedad::Get_Precio() { return Precio; }
bool CPropiedad::Get_Comprado() { return Comprado; }
void CPropiedad::Set_Nombre(string nom) { Nombre = nom; }
void CPropiedad::Set_Dueno(string due) { Dueno = due; }
void CPropiedad::Set_Precio(long int pre) { Precio = pre; }
void CPropiedad::Set_Comprado(bool value) { Comprado = value; }
long int CPropiedad::Get_60() {

	return Precio*0.60;
}
long int CPropiedad::Get_80() {

	return Precio*0.80;
}


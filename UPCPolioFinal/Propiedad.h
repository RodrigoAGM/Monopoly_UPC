#pragma once
#include <string>
using namespace std;

class CPropiedad
{
private:

	string Nombre;
	string Dueno;
	long int Precio;
	bool Comprado;

public:

	CPropiedad(string nom, long int pre, string dueno);
	~CPropiedad();
	string Get_Nombre();
	string Get_Dueno();
	long int Get_Precio();
	bool Get_Comprado();
	void Set_Nombre(string nom);
	void Set_Dueno(string due);
	void Set_Precio(long int pre);
	void Set_Comprado(bool value);
	long int Get_60();
	long int Get_80();
};
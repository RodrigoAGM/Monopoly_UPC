#pragma once
#include "Propiedad.h"
#include <vector>

using namespace std;

class CJugador
{
private:

	long int Dinero;
	bool EnCarcel;
	int NPropiedades;
	string Nombre;
	string Ficha;
	vector<CPropiedad*> Propiedades;
	int x;
	int y;
	int xM;
	int yM;
	double dx;
	double dy;

public:

	CJugador(string nom, string fic);
	~CJugador();
	int Get_x();
	int Get_y();
	int Get_xM();
	int Get_yM();
	double Get_dx();
	double Get_dy();
	void Set_x( int value );
	void Set_y( int value );
	void Set_xM( int value );
	void Set_yM( int value );
	void Set_dx( double value );
	void Set_dy( double value );
	long int Get_Dinero();
	bool Get_EnCarcel();
	int Get_NPropiedades();
	string Get_Nombre();
	string Get_Ficha();
	void Set_Dinero(long int din);
	void Set_EnCarcel(bool value);
	void Set_NPropiedades(int value);
	void Set_Nombre(string value);
	void Agregar_Propiedades(CPropiedad* obj);

};
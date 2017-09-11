#include "Gestor.h"

using namespace System;

CGestor::CGestor(CJugador *J1, CJugador *J2)
{
	Jugador1 = J1;
	Jugador2 = J2;
	Banco = new CBanco();
}

CGestor::~CGestor()
{
}

int MTablero[5][8] = 
{  
	{ 3,1,1,1,5,1,6,7 },
	{ 1,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,1 },
	{ 2,6,1,1,1,1,5,4 } 
};

CJugador *CGestor::Get_Jugador1() { return Jugador1; }
CJugador *CGestor::Get_Jugador2() { return Jugador2; }
CBanco *CGestor::Get_Banco() { return Banco; }

int CGestor::Dado(){

	Random r;
	return r.Next(1, 7);
}

void CGestor::CargarPropiedades() {

	ifstream arch("Propiedades.txt");
	string nombre, temp, linea;
	long int precio;
	  
	while (getline(arch, linea)) {

		stringstream ss(linea);
		getline(ss, nombre, ',');
		getline(ss, temp, ','); precio = atoi(temp.c_str());
		this->Propiedades.push_back(new CPropiedad(nombre, precio, "Banco"));
	}
}

vector<CPropiedad*> CGestor::Get_Vector() {

	return Propiedades;

}

CPropiedad *CGestor::Get_Propiedad(int xM, int yM, string nom) {
	
	if ((xM == 0 && yM == 3) || nom == "Av. Larco") {
		return Propiedades[0];
	}
	else if ((xM == 0 && yM == 2) || nom == "Av. Arequipa") {
		return Propiedades[1];
	}
	else if ((xM == 0 && yM == 1) || nom == "Paseo de la Republica") {
		return Propiedades[2];
	}
	else if ((xM == 1 && yM == 0) || nom == "Jr. de la Union") {
		return Propiedades[3];
	}
	else if ((xM == 2 && yM == 0) || nom == "Plaza San Martin") {
		return Propiedades[4];
	}
	else if ((xM == 3 && yM == 0) || nom == "Centro Civico") {
		return Propiedades[5];
	}
	else if ((xM == 5 && yM == 0) || nom == "Av. Bolivar") {
		return Propiedades[6];
	}
	else if ((xM == 7 && yM == 1) || nom == "UNMSM") {
		return Propiedades[7];
	}
	else if ((xM == 7 && yM == 2) || nom == "Av. Venezuela") {
		return Propiedades[8];
	}
	else if ((xM == 7 && yM == 3) || nom == "Av. La Marina") {
		return Propiedades[9];
	}
	else if ((xM == 5 && yM == 4) || nom == "Plaza San Miguel") {
		return Propiedades[10];
	}
	else if ((xM == 4 && yM == 4) || nom == "UPC") {
		return Propiedades[11];
	}
	else if ((xM == 3 && yM == 4) || nom == "Av. Primavera") {
		return Propiedades[12];
	}
	else if ((xM == 2 && yM == 4) || nom == "Bembos Surco") {
		return Propiedades[13];
	}
	else {
		return NULL;
	}
}
vector<CPropiedad*> CGestor::Get_Propiedades_Jugador(CJugador *obj){
	
	vector<CPropiedad*> aux;

	for (int i = 0; i < Propiedades.size(); ++i) {

		if (obj->Get_Nombre() == Propiedades[i]->Get_Dueno()) {
			aux.push_back(Propiedades[i]);
		}
	}

	return aux;
}
void CGestor::Derecho_de_Paso(CJugador* paga, CJugador* recibe) {

	paga->Set_Dinero(paga->Get_Dinero() - 5000);
	recibe->Set_Dinero(recibe->Get_Dinero() + 5000);
}
void CGestor::Comprar_Propiedad(CJugador *j1) {

	Get_Propiedad(j1->Get_xM(), j1->Get_yM(), "")->Set_Dueno(j1->Get_Nombre());
	j1->Set_Dinero(j1->Get_Dinero() - Get_Propiedad(j1->Get_xM(), j1->Get_yM(), "")->Get_Precio());
	Banco->Set_Dinero(Banco->Get_Dinero() + Get_Propiedad(j1->Get_xM(), j1->Get_yM(), "")->Get_Precio());
	Banco->Set_NPropiedades(Banco->Get_NPropiedades() - 1);
	j1->Set_NPropiedades(j1->Get_NPropiedades() + 1);
}
void CGestor::Pagar_Penalidad(CJugador *j1) {

	j1->Set_Dinero(j1->Get_Dinero() - 10000);
	Banco->Set_Dinero(Banco->Get_Dinero() + 10000);
}
int CGestor::Calcular_Impuestos(CJugador *j1) {
	
	int total = 0, impuestos;
	vector<CPropiedad*> aux = Get_Propiedades_Jugador(j1);

	for (int i = 0; i < aux.size(); i++) {
		total += aux[i]->Get_Precio();
	}

	impuestos = total * 0.10;
	return impuestos;
}
void CGestor::Pagar_Impuestos(CJugador *j1) {

	int cantidad = Calcular_Impuestos(j1);
	Banco->Set_Dinero(Banco->Get_Dinero() + cantidad);
	j1->Set_Dinero(j1->Get_Dinero() - cantidad);
}






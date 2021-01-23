#pragma once
#include <iostream>

using namespace std;

class Jugador
{
private:
	string nombre;
	string apellidoPaterno;
	string apellidoMaterno;
	int cantidadIntento;

public:
	Jugador();

	string getNombre() { return nombre; }
	string getApellidoPaterno() { return apellidoPaterno; }
	string getApellidoMaterno() { return apellidoMaterno; }
	int getCantidadIntento() { return cantidadIntento; }

	void setNombre(string _nombre) { nombre = _nombre; }
	void setApellidoPaterno(string _apellidoPaterno) { apellidoPaterno = _apellidoPaterno; }
	void setApellidoMaterno(string _apellidoMaterno) { apellidoMaterno = _apellidoMaterno; }
	void setCantidadIntento(int _cantidadIntento) { cantidadIntento = _cantidadIntento; }
};


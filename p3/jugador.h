//jugador.h
//La clase jugador representa a un jugador y sus datos que lo diferencian

#ifndef JUGADOR_H
#define JUGADOR_H

#include "persona.h"
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <cstdlib>

//Estructura Apuesta que almacena los datos de las apuestas
struct Apuesta{
	int tipo;
	string valor;
	int cantidad;
};


using namespace std;

//La clase jugador tambien heredada de la clase persona
class Jugador: public Persona{

private:

	int dinero_;
	string codigo_;
	//Una lista del tipo estructura (Apuesta) llamada apuestas_, un atributo de la clase jugador
	list <Apuesta> apuestas_;

public:
	//Constructor de la clase jugador con parametros obligatorios el dni y el codigo
	Jugador(string dni,string codigo,string nombre="",string apellidos="",int edad=0,string direccion ="",string localidad="",string provincia="",string pais="") : Persona(dni,nombre,apellidos,edad,direccion,localidad,provincia,pais) {codigo_=codigo; dinero_=1000;};

	inline string getCodigo (){ return codigo_;};
	inline void setCodigo (string codigo){codigo_=codigo;};

	inline int getDinero (){ return dinero_;};
	inline void setDinero (int dinero){dinero_=dinero;};

	inline list <Apuesta> getApuestas(){return apuestas_;};
	void setApuestas();


};

#endif

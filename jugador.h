#ifndef JUGADOR_H
#define JUGADOR_H
#include "jugador.h"
#include "persona.h"
#include <string>
#include <list>
#include <cstdlib>
using namespace std;


class Jugador : public Persona{
  private:

    struct Apuesta{

	int tipo;
	string valor;
	int cantidad;
};

    int dinero_;
    string codigo_;
    list <Apuesta> apuestas_;

  public:

    Jugador(string dni,string codigo,string nombre="",string apellidos="",int edad=0,string direccion="",string localidad="",string provincia="",string pais="") : Persona(dni,nombre,apellidos,edad,direccion,localidad,provincia,pais){codigo_=codigo;dinero_=1000;}
    inline void setCodigo(string codigo) {codigo_=codigo;}
    inline string getCodigo() const {return codigo_;}
    inline void setDinero(int dinero){dinero_=dinero;}
    inline int getDinero(){return dinero_;}
    inline list<Apuesta> getApuestas(){return apuestas_;}
    void setApuestas();

};





#endif

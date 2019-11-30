#ifndef CRUPIER_H
#define CRUPIER_H
#include "persona.h"
#include <string>
using namespace std;

/*Clase heredada de la clase persona que recoge todos los atributos de la clase persona, y un solo atributo nuevo*/
class Crupier : public Persona{
  private:
    string codigo_;

  public:
    /*Constructor de la clase crupier que tiene como parametros obligaorios el dni y el codigo, los demas son complementarios
    al heredar los atributos de la clase persona no hace falta ningun metodo de inicializacion, solo para el string codigo*/
    Crupier(string dni,string codigo,string nombre="",string apellidos="",int edad=0,string direccion="",string localidad="",string provincia="",string pais="") : Persona(dni,nombre,apellidos,edad,direccion,localidad,provincia,pais) {codigo_=codigo;};

    inline void setCodigo(string codigo){codigo_=codigo;}
    inline string getCodigo() const{return codigo_;}

};




#endif

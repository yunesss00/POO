#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <cstdlib>

using namespace std;
/*La clase persona recoge los datos principales de los jugadores y el crupier con los atributos que se ven a
continuacion y los metodos correspondientes set y get de cada atributo, es la clase principal*/
class Persona{
  private:
    string DNI_;
    string nombre_;
    string apellidos_;
    int edad_;
    string direccion_;
    string localidad_;
    string provincia_;
    string pais_;

  public:
    //Constructor de la clase persona que tiene como parametro obligatorio el string dni, y como complementarios todos los demas
    Persona(string dni,string nombre="",string apellidos="",int edad=0,string direccion="",string localidad="",string provincia="",string pais="") {DNI_=dni;nombre_=nombre;apellidos_=apellidos;edad_=edad;direccion_=direccion;localidad_=localidad;provincia_=provincia;pais_=pais;};

    inline void setDNI(string dni){DNI_=dni;}
    inline string const getDNI(){return DNI_;}

    inline void setNombre(string nombre){nombre_=nombre;}
    inline string const getNombre(){return nombre_;}

    inline void setApellidos(string apellidos){apellidos_=apellidos;}
    inline string const getApellidos(){return apellidos_;}

    inline bool setEdad(int edad){if(edad>=0){
      edad_=edad;
      return true;
      }else{return false;}
    }
    inline int getEdad() const {return edad_;}

    inline void setDireccion(string direccion){direccion_=direccion;}
    inline string getDireccion() const {return direccion_;}

    inline void setLocalidad(string localidad){localidad_=localidad;}
    inline string getLocalidad() const {return localidad_;}

    inline void setProvincia(string provincia){provincia_=provincia;}
    inline string getProvincia() const {return provincia_;}

    inline void setPais(string pais){pais_=pais;}
    inline string getPais() const {return pais_;}

    inline string getApellidosyNombre() const {string apellidosNombre; apellidosNombre=apellidos_+", "+nombre_; return apellidosNombre;}

    inline bool mayor() const {
      if(edad_<=17){
        return false;
      }else{return true;}
    }

};







#endif

#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <cstdlib>

using namespace std;

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
    Persona(string dni,string nombre="",string apellidos="",int edad=0,string direccion="",string localidad="",string provincia="",string pais="") {DNI_=dni;nombre_=nombre;apellidos_=apellidos;edad_=edad;direccion_=direccion;localidad_=localidad;provincia_=provincia;pais_=pais;};
    inline void setDNI(string dni){DNI_=dni;}
    inline string const getDNI(){return DNI_;}
    inline void setNombre(string nombre){nombre=nombre_;}
    inline string const getNombre(){return nombre_;}
    inline void setApellidos(string apellidos){apellidos=apellidos_;}
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
    string getApellidosyNombre() const {string apellidosNombre; apellidosNombre=apellidos_+", "+nombre_; return apellidosNombre;}
    inline bool mayor() const {
      if(edad_<=17){
        return false;
      }else{return true;}
    }

};







#endif

#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona{
  private:
    string dni_;
    string nombre_;
    string apellidos_;
    int edad_;
    string direccion_;
    string localidad_;
    string provincia_;
    string pais_;

  public:
    Persona();
    void persona(string dni,);
    inline void setDni(string dni){dni_=dni;}
    inline string getDni(){return dni_;}
    inline void setNombre(string nombre){nombre=nombre_;}
    inline string getNombre(){return nombre_;}
    inline void setApellidos(string apellidos){apellidos=apellidos_;}
    inline string getApellidos(){return apellidos_;}
    inline bool setEdad(int edad){if((edad>=0)&&(edad%2==0)){
      edad_=edad;
      return true;
      }else{return false;}
    }
    inline int getEdad(){return edad_;}
    inline void setDireccion(string direccion){direccion_=direccion;}
    inline string getDireccion(){return direccion_;}
    inline void setLocalidad(string localidad){localidad_=localidad;}
    inline string getLocalidad(){return localidad_;}
    inline void setProvincia(string provincia){provincia_=provincia;}
    inline string getProvincia(){return provincia_;}
    inline void setPais(string pais){pais_=pais;}
    inline string getPais(){return pais_;}
    void getApellidosyNombre();
};









#endif

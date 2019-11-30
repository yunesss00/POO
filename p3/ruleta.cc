#include "ruleta.h"
using namespace std;

bool Ruleta::addJugador(Jugador jugador){
  list <Jugador>::iterator i;
  for(i=jugadores_.begin();i!=jugadores_.end();i++){
    if(i->getDNI()==jugador.getDNI()){return false;}
  }
  jugadores_.push_back(jugador);
  string nomfich = (jugador.getDNI() + ".txt");
  ifstream fichApuestas(nomfich.c_str());
  if(!fichApuestas){
    ofstream fichApuestas(nomfich.c_str());
  }
  fichApuestas.close();
  return true;
}

int Ruleta::deleteJugador(Jugador jugador){
  list <Jugador>::iterator i;
  if(jugadores_.empty()){return -1;}
  for(i=jugadores_.begin();i!=jugadores_.end();i++){
    if(i->getDNI()==jugador.getDNI()){
      jugadores_.erase(i);
      return 1;
    }else{return -2;}
  }
}

void Ruleta::escribeJugadores(){
  list <Jugador>::iterator i;
  string nomfich("jugadores.txt");
  ofstream fichJugadores(nomfich.c_str());
  for(i=jugadores_.begin();i!=  jugadores_.end();i++){
    fichJugadores<<i->getDNI()+",";
    fichJugadores<<i->getCodigo()+",";
    fichJugadores<<i->getNombre()+",";
    fichJugadores<<i->getApellidos()+",";
    fichJugadores<<i->getDireccion()+",";
    fichJugadores<<i->getLocalidad()+",";
    fichJugadores<<i->getProvincia()+",";
    fichJugadores<<i->getPais()+",";
    fichJugadores<<i->getDinero()<<endl;
  }
  fichJugadores.close();
}

void Ruleta::leeJugadores(){
  string cadena;
  ifstream fichJugadores;
  Jugador aux("dni","cod");
  fichJugadores.open("jugadores.txt");
  jugadores_.clear();

  while(getline(fichJugadores,cadena,',')&&!fichJugadores.eof()){
    aux.setDNI(cadena);
    getline(fichJugadores,cadena,',');
    aux.setCodigo(cadena);
    getline(fichJugadores,cadena,',');
    aux.setNombre(cadena);
    getline(fichJugadores,cadena,',');
    aux.setApellidos(cadena);
    getline(fichJugadores,cadena,',');
    aux.setDireccion(cadena);
    getline(fichJugadores,cadena,',');
    aux.setProvincia(cadena);
    getline(fichJugadores,cadena,',');
    aux.setLocalidad(cadena);
    getline(fichJugadores,cadena,',');
    aux.setPais(cadena);
    getline(fichJugadores,cadena,'\n');
    aux.setDinero(atoi(cadena.c_str()));

    jugadores_.push_back(aux);
  }
  fichJugadores.close();
}

void Ruleta::getPremios(){
  list <Jugador>::iterator i;
  
  for(i=jugadores_.begin();i!=jugadores_.end();i++){

  }







}

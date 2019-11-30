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

  while(getline(fichJugador,cadena,",")&&!fichJugadores.eof()){
    aux.setDNI(aux);
    getline(fichJugadores,cadena,",");
    aux.setCodigo(aux);
    getline(fichJugadores,cadena,",");
    aux.setNombre(aux);
    getline(fichJugadores,cadena,",");
    aux.setApellidos(aux);
    getline(fichJugadores,cadena,",");
    aux.setDireccion(aux);
    getline(fichJugadores,cadena,",");
    aux.setProvincia(aux);
    getline(fichJugadores,cadena,",");
    aux.setLocalidad(aux);
    getline(fichJugadores,cadena,",");
    aux.setPais(aux);
    getline(fichJugadores,cadena,"\n");
    aux.setDinero(atoi(aux.c_str()));

    jugadores_.push_back();
  }
  fichJugador,",");.close();
}

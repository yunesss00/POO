#ifndef RULETA_H
#define RULETA_H
#include <string>
#include <list>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <iostream>
#include <fstream>
#include "crupier.h"
#include "jugador.h"
#include "persona.h"

using namespace std;

//Clase ruleta que no es heredada de ningina otra clase, pero si que tiene como atributos otras clases
class Ruleta{
  private:
    int banca_, bola_;
    //Una lista de la clase jugador, una lista de clases
    list <Jugador> jugadores_;
    //Una variable de la clase del tipo Crupier que es otra clase
    Crupier crupier_;

  public:
    //Constructor de la clase ruleta que se le pasa como argumento un atributo del tipo crupier
    Ruleta(Crupier c):crupier_(c){banca_=1000000; bola_=-1;}

    inline int getBanca(){return banca_;}
    inline int getBola(){return bola_;}

    inline bool setBanca(int banca){if(banca>=0){return true;}else{return false;}}
    inline bool setBola(int bola){if((bola>=0)&&(bola<=36)){return true;}else{return false;}}

    inline Crupier getCrupier(){return crupier_;};
    inline void setCrupier(Crupier crupier){crupier_=crupier;}

    inline list <Jugador> getJugadores(){return jugadores_;}
    bool addJugador(Jugador jugador);
    int deleteJugador(Jugador jugador);
    void escribeJugadores();
    void leeJugadores();
    inline void giraRuleta(){int aux=rand()%37; setBola(aux);}
    void getPremios();

};


#endif

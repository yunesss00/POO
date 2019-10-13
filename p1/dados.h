
#ifndef DADOS_H
#define DADOS_H

class Dados{
private:
  int d1_;
  int d2_;
  int cont1_;
  int cont2_;
  float sum1_;
  float sum2_;
  int v1_[5];
  int v2_[5];

public:
  Dados();
  void lanzamiento();
  int getDado1();
  int getDado2();
  bool setDado1(int num1);
  bool setDado2(int num2);
  int getSuma();
  int getDiferencia();
  int getLazamientos1();
  int getLazamientos2();
  float getMedia1();
  float getMedia2();
  int getUltimos1();
  int getUltimos2();
};



#endif

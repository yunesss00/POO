
#ifndef DADOS_H
#define DADOS_H

class Dados{
private:
  int d1_;
  int d2_;
  int cont1_;
  int cont2_;
  int sum1_;
  int sum2_;
	int v1_[5], v2_[5];

public:
  Dados();
  void lanzamiento();
  int getDado1();
  int getDado2();
  bool setDado1(int num1);
  bool setDado2(int num2);
  int getSuma();
  int getDiferencia();
  int getLanzamientos1();
  int getLanzamientos2();
  float getMedia1();
  float getMedia2();
  void rellenaVector1 ();
  void rellenaVector2 ();
  void getUltimos1(int *v);
  void getUltimos2(int *v);
};



#endif

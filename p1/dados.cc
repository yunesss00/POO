#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include "dados.h"
using namespace std;

Dados::Dados(){
  srand(time(NULL));
  d1_=1;
  d2_=1;
  cont1_=0;
  cont2_=0;
  sum1_=0;
  sum2_=0;
  v1_[5]={0,0,0,0,0};
  v2_[5]={0,0,0,0,0};
}
void Dados::lanzamiento(){
  d1_=(rand()%6)+1;
  d2_=(rand()%6)+1;
  cont1_++;
  cont2_++;
  sum1_=sum1_+d1_;
  sum2_=sum2_+d2_;
  

}

int Dados::getDado1(){
  return d1_;
}

int Dados::getDado2(){
  return d2_;
}

bool Dados::setDado1(int num1){
  if((num1>=1)&&(num1<=6)){
    d1_=num1;
    cont1_++;
    sum1_=sum1_+num1;
    return true;
  }else{
    return false;
  }
}

bool Dados::setDado2(int num2){
  if((num2>=1)&&(num2<=6)){
    d2_=num2;
    cont2_++;
    sum2_=sum2_+num2;
    return true;
  }else{
    return false;
  }
}

int Dados::getSuma(){
  return d1_+d2_;
}

int Dados::getDiferencia(){
  int diferencia,menor,mayor;
  if(d1_<=d2_){
    menor=d1_;
    mayor=d2_;
  }
  diferencia=mayor-menor;
  return diferencia;
}

int Dados::getLazamientos1(){
  return cont1_;
}

int Dados::getLazamientos2(){
  return cont2_;
}

float Dados::getMedia1(){
  return sum1_/cont1_;
}

float Dados::getMedia2(){
  return sum2_/cont2_;
}

int Dados::getUltimos1(){

  return v1_;
}

int Dados::getUltimos2(){

  return v2_;
}

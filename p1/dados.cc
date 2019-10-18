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
  for(int i_=0;i_<5;i_++){
    v1_[i_]=0;
    v2_[i_]=0;
  }
}
void Dados::lanzamiento(){
  d1_=(rand()%6)+1;
  d2_=(rand()%6)+1;
  cont1_++;
  cont2_++;
  sum1_=sum1_+d1_;
  sum2_=sum2_+d2_;
  rellenaVector1();
  rellenaVector2();

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
    rellenaVector1();
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
    rellenaVector2();
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
  }else{
    menor=d2_;
    mayor=d1_;
  }
  diferencia=mayor-menor;
  return diferencia;
}

int Dados::getLanzamientos1(){
  return cont1_;
}

int Dados::getLanzamientos2(){
  return cont2_;
}

float Dados::getMedia1(){
  if(cont1_==0){
    return 0;
  }else{
    return (float)sum1_/cont1_;
  }
}

float Dados::getMedia2(){
  if(cont2_==0){
    return 0;
  }else{
    return (float)sum2_/cont2_;
  }
}
void Dados::rellenaVector1 (){

	int i;

	for(i=4;i>=0;i--){
	v1_[i]=v1_[i-1];
	}
	v1_[0]=d1_;
}

void Dados::rellenaVector2 (){

	int i;

	for(i=4;i>=0;i--){
	v2_[i]=v2_[i-1];
	}
	v2_[0]=d2_;
}

void Dados::getUltimos1(int *v){

	int i;

	for(i=0;i<5;i++){

	v[i]=v1_[i];
	}
}

void Dados::getUltimos2(int *v){

	int i;

	for(i=0;i<5;i++){

	v[i]=v2_[i];
	}
}

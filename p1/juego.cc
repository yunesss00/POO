#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include "dados.h"
using namespace std;

int main() {
  Dados d;
  int opcion;

  do{
  cout<<"\n\n\tElige una opcion:\n"<<endl;
  cout<<"1.Lanzar dados dados."<<endl;
  cout<<"2.Introducir dado 1."<<endl;
  cout<<"3.Introducir dado 2."<<endl;
  cout<<"4.Mostrar suma."<<endl;
  cout<<"5.Mostrar diferencia."<<endl;
  cout<<"6.Mostrar numero de lanzamientos."<<endl;
  cout<<"7.Mostrar media."<<endl;
  cout<<"8.Exit."<<endl;
  int num1,num2;

  cin>>opcion;
    switch (opcion) {
      case 1: d.lanzamiento();
              cout<<"Dado 1:"<<d.getDado1()<<endl;
              cout<<"Dado 2:"<<d.getDado2()<<endl;
              num1=d.getDado1();
              num2=d.getDado2();
      break;

      case 2: cout<<"Introduce el dado 1:";
              cin>>num1;
              if(d.setDado1(num1)==true){
                cout<<"Numero correcto"<<endl;
              }else{
                cout<<"Numero incorrecto"<<endl;
              }
      break;

      case 3: cout<<"Introduce el dado 2:";
              cin>>num2;
              if(d.setDado2(num2)==true){
                cout<<"Numero correcto"<<endl;
              }else{
                cout<<"Numero incorrecto"<<endl;
              }
      break;

      case 4: cout<<"La suma de los dados es:"<<d.getSuma()<<endl;
      break;

      case 5: cout<<"La diferencia entre el menor y el mayor es: "<<d.getDiferencia()<<endl;
      break;

      case 6: cout<<"El numero de lanzamientos del dado 1 es: "<<d.getLazamientos1()<<endl;
              cout<<"El numero de lanzamientos del dado 2 es: "<<d.getLazamientos2()<<endl;
      break;
      
      case 7: cout<<"La media de los numeros lanzados en el dado 1 es: "<<d.getMedia1()<<endl;
              cout<<"La media de los numeros lanzados en el dado 2 es: "<<d.getMedia2()<<endl;
      break;

      default: cout<<"Saliendo del programa..."<<endl;
    }
  }while (opcion!=8);




  return 0;

}

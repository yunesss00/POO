// dados_unittest.cc: Juan A. Romero
// A sample program demonstrating using Google C++ testing framework.
//


// This sample shows how to write a more complex unit test for a class
// that has multiple member functions.
//
// Usually, it's a good idea to have one test for each method in your
// class.  You don't have to do that exactly, but it helps to keep
// your tests organized.  You may also throw in additional tests as
// needed.

#include "dados.h"
#include "gtest/gtest.h"

// Tests the c'tor.
TEST(Dados, Constructor) {
  Dados d;

  EXPECT_EQ(1, d.getDado1());
  EXPECT_EQ(1, d.getDado2());
  EXPECT_EQ(2, d.getSuma());
}

// Tests operación lanzamiento
TEST(Dados, Lanzamiento) {
  Dados d;
  for (int i=0; i<100; i++){
    d.lanzamiento();
    EXPECT_GT(d.getDado1(), 0);
    EXPECT_LT(d.getDado1(), 7);
    EXPECT_GT(d.getDado2(), 0);
    EXPECT_LT(d.getDado2(), 7);
    }

}

// Tests operación suma
TEST(Dados, Suma) {
  Dados d;

  EXPECT_EQ(d.getDado1()+d.getDado2(), d.getSuma());
}

// Tests modificadores
TEST(Dados, Modificadores) {
  Dados d;
  EXPECT_FALSE(d.setDado1(9));
  EXPECT_EQ(1,d.getDado1());
  EXPECT_FALSE(d.setDado1(-9));
  EXPECT_EQ(1,d.getDado1());
  EXPECT_FALSE(d.setDado2(9));
  EXPECT_EQ(1,d.getDado2());
  EXPECT_FALSE(d.setDado2(-9));
  EXPECT_EQ(1,d.getDado2());
  EXPECT_TRUE(d.setDado1(3));
  EXPECT_EQ(3, d.getDado1());
  EXPECT_TRUE(d.setDado2(2));
  EXPECT_EQ(2, d.getDado2());
  EXPECT_EQ(5, d.getSuma());
}

// Test de diferencia.
TEST(Dados,Diferencia){
  Dados d;
  d.setDado1(2);
  d.setDado2(5);
  EXPECT_EQ(3,d.getDiferencia());
  d.setDado1(1);
  d.setDado2(2);
  EXPECT_EQ(1,d.getDiferencia());
  d.setDado1(5);
  d.setDado2(5);
  EXPECT_EQ(0,d.getDiferencia());
  d.setDado1(1);
  d.setDado2(6);
  EXPECT_EQ(5,d.getDiferencia());
}

//Test de Numero de lanzamientos
TEST(Dados,nLanzamientos){
  Dados d;
  EXPECT_EQ(0,d.getLazamientos1());
  EXPECT_EQ(0,d.getLazamientos2());
  d.lanzamiento();
  EXPECT_EQ(1,d.getLazamientos1());
  EXPECT_EQ(1,d.getLazamientos2());
  d.lanzamiento();
  d.lanzamiento();
  d.lanzamiento();
  EXPECT_EQ(4,d.getLazamientos1());
  EXPECT_EQ(4,d.getLazamientos2());
  d.setDado1(5);
  EXPECT_EQ(5,d.getLazamientos1());
  EXPECT_EQ(4,d.getLazamientos2());
  d.setDado2(4);
  EXPECT_EQ(5,d.getLazamientos1());
  EXPECT_EQ(5,d.getLazamientos2());
  d.setDado1(3);
  d.setDado2(1);
  EXPECT_EQ(6,d.getLazamientos1());
  EXPECT_EQ(6,d.getLazamientos2());
  d.setDado1(4);
  d.setDado1(6);
  d.setDado1(1);
  d.setDado2(4);
  EXPECT_EQ(9,d.getLazamientos1());
  EXPECT_EQ(7,d.getLazamientos2());
}

//Test Media
TEST(Dados,Media){
  Dados d;
  d.getMedia1();
  d.getMedia2();
  EXPECT_EQ(0,d.getMedia1());
  EXPECT_EQ(0,d.getMedia2());

  for(int i=0;i<100;i++){
    d.lanzamiento();
    EXPECT_GT(1,d.getMedia1());
    EXPECT_GT(1,d.getMedia2());
  }
}

//Test de media 2
TEST(Dados,Media2){
  Dados d;
  d.setDado1(6);
  d.setDado2(6);
  EXPECT_GT(6,d.getMedia1());
  EXPECT_LT(6.1,d.getMedia1());
  EXPECT_GT(6,d.getMedia2());
  EXPECT_LT(6.1,d.getMedia2());
  d.setDado1(3);
  d.setDado2(3);
  EXPECT_GT(4.5,d.getMedia1());
  EXPECT_LT(4.6,d.getMedia1());
  EXPECT_GT(4.5,d.getMedia2());
  EXPECT_LT(4.6,d.getMedia2());
  d.setDado1(1);
  d.setDado2(2);
  EXPECT_GT(5,d.getMedia1());
  EXPECT_LT(5.1,d.getMedia1());
  EXPECT_GT(3.6,d.getMedia2());
  EXPECT_LT(3.7,d.getMedia2());
}

//Test de vector ultimos
TEST (Dados, getUltimos) {

	Dados d;
	int i;
	int v1[5],v2[5];
	for(i=1;i<6;i++){
	d.setDado1(i);
	d.setDado2(i);
	}
	d.getUltimos1(v1);
	d.getUltimos2(v2);

	for (i=0;i<5;i++){
	EXPECT_EQ(5-i,v1[i]);
	EXPECT_EQ(5-i,v2[i]);
	}

}

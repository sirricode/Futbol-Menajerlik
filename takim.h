#include<string>
#include "Oyuncu.cpp"
#ifndef Included_takim_H
#define Included_takim_H

using namespace std;

class Takim {

  private:
  string isim;
  int g_derece;
  string ulke;
  string lig;
  Oyuncu *oyuncular;



  public:
  Takim(string isim2, string lig2 ,int g_derece2, string ulke2, Oyuncu *oyuncular2);

  Takim();

  string get_isim(){
    return isim;
  }

  void set_isim(string isim2){
    isim=isim2;
  }

  string get_lig(){
    return lig;
  }

  void set_lig(string lig2){
    lig=lig2;
  }

  Oyuncu* get_oyuncular(){
    return oyuncular;
  }

  void set_oyuncular(Oyuncu *oyuncular2){
    oyuncular=oyuncular2;
  }

  int get_g_derece(){
    return g_derece;
  }

  void set_g_derece(int g_derece2){
    g_derece=g_derece2;
  }


  string get_ulke(){
    return ulke;
  }

  void set_ulke(string ulke2){
    ulke=ulke2;
  }
};

#endif

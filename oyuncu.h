#include<string>
#ifndef Included_oyuncu_H
#define Included_oyuncu_H

using namespace std;

class Oyuncu {
  private:
  string isim;
  int derece;
  string mevki;
  string ulke;
  int yas;
  int fiyat;
  bool sakat;


  public:
  Oyuncu(string isim2,int derece2, string mevki2 , string ulke2, int yas2, int fiyat2, bool sakat2);
  Oyuncu();

  string get_isim(){
    return isim;
  }

  void set_isim(string isim2){
    isim=isim2;
  }

  int get_derece(){
    return derece;
  }

  void set_derece(int derece2){
    derece=derece2;
  }

  int get_fiyat(){
    return fiyat;
  }

  void set_fiyat(int fiyat2){
    fiyat=fiyat2;
  }

  string get_mevki(){
    return mevki;
  }

  void set_mevki(string mevki2){
    mevki=mevki2;
  }

  string get_ulke(){
    return ulke;
  }

  void set_ulke(string ulke2){
    ulke=ulke2;
  }

  int get_yas(){
    return yas;
  }

  void set_yas(int yas2){
    yas=yas2;
  }

  bool set_sakat(){
    return sakat;
  }

  void set_sakat(bool sakat2){
    sakat=sakat2;
  }

};

#endif

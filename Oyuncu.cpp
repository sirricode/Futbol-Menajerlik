#include <iostream>
#include "oyuncu.h"


using namespace std;

  Oyuncu::Oyuncu(string isim2,int derece2, string mevki2 , string ulke2, int yas2, int fiyat2, bool sakat2){
    isim=isim2;
    derece=derece2;
    ulke=ulke2;
    mevki=mevki2;
    yas=yas2;
    fiyat=fiyat2;
    sakat=sakat2;
  }



  Oyuncu::Oyuncu(){};

#include <iostream>
#include <string.h>
#include "takim.h"

using namespace std;

    Takim::Takim(string isim2, string lig2 ,int g_derece2, string ulke2, Oyuncu *oyuncular2){
      isim=isim2;
      g_derece=g_derece2;
      ulke=ulke2;
      lig=lig2;
      oyuncular=oyuncular2;
    }

    Takim::Takim(){

    }

#include "oyuncu.h"
#include "Takim.cpp"

using namespace std;

int main(int argc, char const *argv[]) {

    Oyuncu o;
    o.set_isim("Ali");

  cout << o.get_isim() << endl;
  return 0;
}

#include <iostream>
using namespace std;
//kullan�c�dan al�nan say�y� yaz�ya �evirme
int main() {
  int sayi, rakam = 0;
  string yazi[] = {"sifir", "bir", "iki", "uc", "dort", "bes", "alti", "yedi", "sekiz", "dokuz"};
  cout << "Yaziya cevirmek istediginiz sayiyi giriniz: "<<endl;
  cin >> sayi;
  while (sayi > 0) {
    rakam = sayi % 10;
    cout << yazi[rakam] << " ";
    sayi /= 10;
  }

  return 0;
}


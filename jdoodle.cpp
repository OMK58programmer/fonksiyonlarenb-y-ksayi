/* 
Welcome to JDoodle!

You can execute code here in 88 languages. Right now you’re in the C++ IDE.

  1. Click the orange Execute button ▶ to execute the sample code below and see how it works.

  2. Want help writing or debugging code? Type a query into JDroid on the right hand side ---------------->

  3. Try the menu buttons on the left. Save your file, share code with friends and open saved projects.

Want to change languages? Try the search bar up the top. 
*/

#include <iostream>
using namespace std;

int enBuyukSayiHesapla(int hesaplanacakDizi[]) {
    int enBuyukSayi = hesaplanacakDizi[0];

    for(int i=0; i<6; i++){
        if(hesaplanacakDizi[i] > enBuyukSayi)
            enBuyukSayi = hesaplanacakDizi[i];
    }

    return enBuyukSayi;
}

int main() {
    int sayilar1[6] = {5, 88, 555, 33, 11, 44};
    int sayilar2[6] = {5, 88, 555, 666, 11, 44};
    int sayilar3[6] = {5, 777, 555, 33, 11, 44};
    int sayilar4[6] = {5, 88, 888, 33, 11, 44};

    int donusDegeri1 = enBuyukSayiHesapla(sayilar1);
    int donusDegeri2 = enBuyukSayiHesapla(sayilar2);
    int donusDegeri3 = enBuyukSayiHesapla(sayilar3);
    int donusDegeri4 = enBuyukSayiHesapla(sayilar4);

    cout << "En Buyuk Sayi: " << endl;
    cout << donusDegeri1 << endl;
    cout << donusDegeri2 << endl;
    cout << donusDegeri3 << endl;
    cout << donusDegeri4 << endl;

    return 0;
}
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
// do-while ve rastgele sayi ile sayi tahmin oyunu
int main(){
    srand(time(0));
    int sayi=rand()%10;
    cout<<"5 Tahmin hakkin var. 1-10 arasinda bir sayiyi haydi tahmin et :)"<<endl;
    int i=0;
    do{
        int tahmin;
        cout<<i+1<<". tahminini gir:"<<endl;
        cin>>tahmin;
        if (tahmin==sayi){
            cout<<"Tahminin:"<<tahmin<<" Dogru :D TEBRIKLER.."<<endl;
            break;
        }
        else{
            if(i==4)
                cout<<"KAYBETTIN :( Sayi:"<<sayi<<endl;
            else if(tahmin<sayi)
                cout<<"Daha buyuk bir sayi dene. Kalan tahmin hakki:"<<4-i<<endl;
            else if(tahmin>sayi)
                cout<<"Daha kucuk bir sayi dene. Kalan tahmin hakki:"<<4-i<<endl;

        }
        i++;
    }while(i<5);
    return 0;
}

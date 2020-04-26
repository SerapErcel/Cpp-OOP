#include <iostream>
/*
5^3
=5*5*5
=(5+5+5+5+5)*5
=(5+5+5+5+5)+(5+5+5+5+5)+(5+5+5+5+5)+(5+5+5+5+5)+(5+5+5+5+5)
*/
using namespace std;
// sayiyi ve ussunu parametre olarak alip sonucu int tipinde dondurecek metodu tanimliyoruz.
int usAl(int sayi,int us){
    int sonuc=0;
    int sayikopya=sayi;
    if(us==0){// bir sayinin ussunun 0 olunca sonuc 1 dir.
        return 1;
    }
    else if(us==1){
        return sayi;
    }
    else{
        for(int i=us;i>1;i--){
            sonuc=0;
            for(int j=sayi;j>0;j--){
                sonuc=sonuc+sayikopya;
            }
            sayikopya=sonuc;
        }
        return sonuc;
    }
}
int main()
{
    cout<<"Ussunu almak istediginiz sayiyi giriniz:"<<endl;
    int sayi;
    cin>>sayi;
    cout<<"Ussu giriniz:"<<endl;
    int us;
    cin>>us;

    int sonuc=usAl(sayi,us);
    cout << "Sonuc:" <<sonuc<< endl;
    return 0;
}

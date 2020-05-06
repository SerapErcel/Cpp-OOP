#include <iostream>

//10000 ile 100000 arasýndaki palindorme sayýlarý ekrana yazan program.
using namespace std;

int main()
{
    int i,bir, on ,yuz,bin, onbin;
    for(int i=10000;i<100000;i++){
        bir=i%10;
        on=(i/10)%10;
        yuz=(i/100)%10;
        bin=(i/1000)%10;
        onbin=(i/10000)%10;
        if(bir==onbin && on==bin ){
                cout<<"-"<<i;;

        }

    }

    return 0;
}

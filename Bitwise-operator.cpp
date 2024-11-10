#include<iostream>
using namespace std;

int main()
{
    // { &  |  ^  ~  <<  >>  }

    int ans = 2&3;
    cout<<"& : "<<ans<<endl;

    int b = 2|3;
    cout<<"|  : "<<b<<endl;

    int c = 2^3;
    cout<<" ^ : "<<c<<endl;

    int d = 2>>3;
    cout<<" >> : "<<d<<endl;

    int e = 2<<3;
    cout<<" << : "<<e<<endl;

    int f = ~6;
    cout<<" ~ : "<<f<<endl;

     int g = ~-6;
    cout<<" ~ : "<<g<<endl;


}
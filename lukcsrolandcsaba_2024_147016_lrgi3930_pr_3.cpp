#include <iostream>

using namespace std;

void Atalakitas(int szam);

int main()
{
    int szam;
    cout<<"szam = ";
    cin>>szam;
    Atalakitas(szam);
    return 0;
}

void Atalakitas(int szam)
{
    int masolat=szam;
    int ujszam;
    int szamjegyek=0;
    while(masolat>0)
    {
        masolat=masolat/10;
        szamjegyek++;
    }
    masolat=szam;
    int oszto=1;
    int i=1;
    while(i<szamjegyek)
    {
        oszto*=10;
        i++;
    }
    int maradek;
    int hanyados;
    while(ujszam!=szam)
    {
        maradek=masolat%oszto;
        hanyados=masolat/oszto;
    }
}

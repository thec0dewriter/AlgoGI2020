#include <iostream>

using namespace std;

int Pallindromszam(unsigned long long n);

unsigned long long ujszam=0;

int main()
{
    unsigned long long n;
    cout<<"Kerem irjon be egy termeszetes szamot: ";
    cin>>n;
    Pallindromszam(n);
    if(n==ujszam)
    {
        cout<<"pallindrom"<<endl;
    }
    else
    {
        cout<<"nem pallindrom"<<endl;
    }
    return 0;
}

int Pallindromszam(unsigned long long n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        ujszam=ujszam*10+n%10;
        Pallindromszam(n/10);
    }
}

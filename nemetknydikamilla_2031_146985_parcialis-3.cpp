#include <iostream>

using namespace std;

int main()
{
    int n=123;

    int eredeti=n;
    int e;
    int db=0;
    while(n>10)
    {
        n=n/10;
        e=n;
        db++;
    }
    int szam=1;
    for(int i=1; i<=db; i++)
    {
        szam=szam*10;
    }
    int valtoz=eredeti-(e*szam);
    int vegleges=10*valtoz+e;
    cout<<vegleges;

    return 0;
}





#include <iostream>
#include <fstream>
using namespace std;
void beolvas(int &n, int x[]);
void kiir(int &n, int x[]);
void rendez(int n, int x[]);
int main()
{
    int n;
    int x[100];
    beolvas(n,x);
    rendez(n,x);
    kiir(n,x);

    return 0;
}
void beolvas(int &n, int x[])
{
    ifstream f("file.in");
    f>>n;
    for(int i=0; i<n; i++)
    {
        f>>x[i];
    }
}
void kiir(int &n, int x[])
{
    for(int i=0; i<n; i++)
    {
        cout<<x[i]<<" ";
    }
}
void rendez(int n, int x[])
{
    for(int i=0; i<n; i++)
    {
        int kicsi=i;
        for(int j=i+1; j<n; j++)
        {
            if(x[kicsi]>x[j])
            {
                kicsi=j;
            }
        }
        int seged;
        seged=x[i];
        x[i]=x[kicsi];
        x[kicsi]=seged;
    }

}

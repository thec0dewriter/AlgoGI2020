//1. Feladat - Vernes Anita Beatrix - Fsega GI2
#include <iostream>
#include <fstream>

using namespace std;

void kiir(int n,int a[])
{
    for(int i = 0; i < n; i++)
        cout<<a[i]<<endl;
}

void csere(int &x,int &y)
{
    int id;
    id = x;
    x = y;
    y = id;
}

void maximum_kivalasztas(int n,int a[])
{
    int k[10000]={0},db ;
    for(int i = 0;i<n;i++)
    {
        db = 0;
        for(int j = 0; j < n;j++)
        {
            if(a[i] > a[j])
                db++;
        }
        k[db] = a[i];
    }

    for(int i = 0;i<n;i++)
    {
        a[i] = k[i];
    }
}

int main()
{
    ifstream fin("/Users/macbook/Desktop/Vizsga/feladat_1/be.txt");
    int n,a[10000];
    fin>>n;
    for(int i = 0;i < n;i++)
        fin>>a[i];

    maximum_kivalasztas(n,a);
    kiir(n,a);
    fin.close();
    return 0;
}

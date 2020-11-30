#include <iostream>
#include <fstream>
using namespace std;
//Rendezzün egy n elemű (n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel! A tömb 64 bites természetes számokat tartalmazhat! A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.
ifstream f("be.txt");
void maximum(int n, int *a)
{

    int aux,max;
    for(int i=0;i<n;i++)
    {
        max=i;

    for(int j=i+1;j<n;j++)
    {
        if(a[max]>a[j])
        {
            max=j;
        }
    aux=a[i];
    a[i]=a[max];
    a[max]=aux;
    }
    }
}
int main()
{
    int n;
    f>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        f>>a[i];
    }
    maximum(n,a);
    for(int i=0;i<n;i++){
    cout<<a[i];
    }
    return 0;
}

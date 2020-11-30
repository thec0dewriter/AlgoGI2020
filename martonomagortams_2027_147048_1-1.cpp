//Rendezzünk egy n elemű (n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel!
// A tömb 64 bites természetes számokat tartalmazhat! A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("be.txt");

void maxivalszt(int &n, int t[])
{
    for(int i=1 ; i<n ; i++)
    {
        int indexm=i;
        for(int j=i+1 ; j<=n ; j++)
        {
            if t[indexm]>t[j]
        }

    }
}


int main()
{
    int n;
    fin>>n;
    int t[n+1];
    for(int i=1 ; i<=n ; i++)
    {
        fin>>t[i];
    }
    /* for(int i=1 ; i<=n ; i++)
    {
        cout<<t[i];
    }*/

    maxivalaszt(n,a);


fin.close();
    return 0;
}

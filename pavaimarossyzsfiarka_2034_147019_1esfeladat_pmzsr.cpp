//Rendezzünk egy n elemű (n <= 10 000) a tömböt
//maximumkiválasztásra épülő rendezéssel!
//A tömb 64 bites természetes számokat tartalmazhat!
//A bemenet első sora tartalmazza az n értéket,
//a többi n sor a sorozat elemeit
//Pavai-Marossy Zsofia-Reka, GI2
#include <iostream>
#include <fstream>

using namespace std;
/*
void elemcsere (int &x, int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}*/

void maximumkivalasztas(int n, int tomb[])       //irunk egy maxiumumkivalasztas algoritmust
{
    int maxim;
    int i;
    int seged;
    maxim=i;

        for(int j=i+1; j<n; j++)
        {
            if(tomb[j]>tomb[i])                     //ha a j nagyobb az i-nel, elmenti a j-t
            {
                maxim=j;
            }
        }
        seged=maxim;
        i=seged;
        maxim=i;                                    //a maximba elmentett j lesz az uj legnagyobb elem
}

int main()
{
    int n;
    int tomb[10000];

    ifstream fin("parcialis1.txt");
    fin>>n;
        for(int i=1; i<=n; i++)
        {
            fin>>tomb[i];
        }

    maximumkivalasztas(n, tomb);                    //meghivjuk az algoritmust

    cout<<"A maximumkivalasztasos rendezes alkalmazasa utan: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<tomb[i]<<" ";
    }
    cout<<endl;

    fin.close();

    return 0;
}

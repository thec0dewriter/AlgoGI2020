#include <iostream>
//Rendezzünk egy n elemű (n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel!
//A tömb 64 bites természetes számokat tartalmazhat! A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.

using namespace std;

void maximum(int tomb[], int n);

int main()
{  int n;
   cin >> n;
   int tomb[n];
   for(int i = 0; i < n; i++)
    cin >> tomb[i];
    maximum(tomb, n);
    for(int i = 0; i < n; i++)
        cout<<tomb[i]<<" ";

    cin
    return 0;
}

void maximum(int tomb[], int n)
{

int seged;
int maxi;
int i;
for(int i = 0; i < n; i++)
{
    maxi=i;
}
for(int j = i + 1; j < n; j++)
    if(tomb[j] > tomb[maxi])
         maxi=j;

if(maxi!=i)
{
    seged=tomb[i];
    tomb[i]=tomb[maxi];
    tomb[maxi]=seged;

}
}

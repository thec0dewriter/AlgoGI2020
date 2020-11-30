#include <iostream>

using namespace std;

// 1. feladat
// Rendezzünk egy n elemû (n <= 10 000) a tömböt maximumkiválasztásra épülõ rendezéssel! A tömb 64 bites természetes számokat tartalmazhat! A bemenet elsõ sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.

int main()
{
    int n;
    cout << "n=";
    cin >> n;

    int tomb[n];
    for(int i = 0; i < n; i++)
        cin >> tomb[i];

    int ind_max, seged;
    for(int i=0; i<n-1; i++)
    {
        ind_max = i;
        for(int j = i+1; j < n; j++)
        {
            if(tomb[ind_max] < tomb[j])
            {
                ind_max = j;
            }
        }
        seged = tomb[i];
        tomb[i] = tomb[ind_max];
        tomb[ind_max] = seged;

    }
    for(int i = n-1; i >= 0; i--)
        cout << tomb[i] << endl;


    return 0;
}

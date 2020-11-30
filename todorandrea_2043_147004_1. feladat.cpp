#include <iostream>

using namespace std;

// 1. feladat
// Rendezz�nk egy n elem� (n <= 10 000) a t�mb�t maximumkiv�laszt�sra �p�l� rendez�ssel! A t�mb 64 bites term�szetes sz�mokat tartalmazhat! A bemenet els� sora tartalmazza az n �rt�ket, a t�bbi n sor a sorozat elemeit.

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

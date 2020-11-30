#include <iostream>

using namespace std;


//Rendezz�nk egy n elem� (n <= 10 000) a t�mb�t maximumkiv�laszt�sra �p�l� rendez�ssel!
//A t�mb 64 bites term�szetes sz�mokat tartalmazhat!
//A bemenet els� sora tartalmazza az n �rt�ket, a t�bbi n sor a sorozat elemeit.

void maxrend(int t[],int n)
{
    int maxhely,seged;

    for(int i = n-1; i>0; i--){
        maxhely = i;
        for(int j = n-2; j>=0; j--){
            if(t[maxhely] < t[j])
                maxhely = j;
        }
        seged = t[i];
        t[i] = t[maxhely];
        t[maxhely] = seged;

    }


}



int main()
{
    int n;
    cout<<"n= ";
    cin>>n;
    int t[n-1];

    for(int i=0; i<n; i++)
        cin>>t[i];

    maxrend(t,n);

        for(int i=0; i<n; i++)
        cout<<t[i]<<' ';

}

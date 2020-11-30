#include <iostream>

using namespace std;


//Rendezzünk egy n elemû (n <= 10 000) a tömböt maximumkiválasztásra épülõ rendezéssel!
//A tömb 64 bites természetes számokat tartalmazhat!
//A bemenet elsõ sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.

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

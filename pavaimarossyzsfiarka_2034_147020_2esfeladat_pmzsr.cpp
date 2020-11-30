//2.Állapítsuk meg (rekurzív algoritmussal), hogy az adott
//n 64 bites természetes szám palindromszám-e vagy sem!
//Pavai-Marossy Zsofia-Reka, GI2

//az a szam palindromszam, amelynek a kozepetol visszafele mindket oldalra ugyanaon szamok vannak pl:12521

//megy csak nem rekurzivan --- ha lesz ido, atnezni

#include <iostream>

using namespace std;

int palindrom(int &n)
{
    //megforditjuk a szamot
    //hogyha ugyanaz a forditottja, mint az eredeti, akkor palindromszam, ha nem akkor nem

    int eredeti=n;
    int forditott=0;

    if(n<0)
        return 0;
    while(eredeti!=0)                                       //megforditjuk a szamot
        {
            forditott=forditott*10+eredeti%10;
            eredeti=eredeti/10;
            //palindrom(n);
        }
        if(forditott==n)                                    //ha a forditott szam megegyezik az eredetivel, akkor a szam palindrom
        {
            cout<<"A szam palindrom";
        }
        else
            cout<<"A szam nem palindrom";
}

int main()
{
    int n;
    cin>>n;

   /* int eredeti=n;
    int forditott=0;
        while(eredeti!=0)
        {
            forditott=forditott*10+eredeti%10;
            //cout<<"forditott szam: "<<forditott<<endl;
            eredeti=eredeti/10;
            //cout<<"az uj eredeti: "<<eredeti<<endl;
        }
        if(forditott==n)
        {
            cout<<"A szam palindrom";
        }
        else
            cout<<"A szam nem palindrom";*/

    palindrom(n);               //meghivjuk a fuggvenyt

    return 0;
}

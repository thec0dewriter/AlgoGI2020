/* Állapítsuk meg (rekurzív algoritmussal), hogy az adott n 64 bites természetes szám palindromszám-e vagy sem! */
/* Egy szam palindrom ha jobbrol vagy balrol olvasva is ugyanaz az alakja */

#include <iostream>

bool Palindromszam (int szam){

int masol = szam;
int szam2 = 0;
int szamjegy;

while (szam>0){

    szamjegy = szam % 10;
    szam2 = ( szam2 * 10 ) + szamjegy;
    szam = szam / 10;

}
return szam2 == masol;

}


using namespace std;

int main()
{
    int x ;

    cout << "x=" ;
    cin >> x;

    //cout << x << endl;

    //x = 12324;
    //cout << x << endl;

    if (Palindromszam(x))
        cout << x << "  -> palindromszam" ;
         else
            cout << x << " -> nem palindromszam";

}

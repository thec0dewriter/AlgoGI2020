#include <iostream>
//Adva van egy legtöbb 10 számjegyet tartalmazó természetes szám.
//Írjunk programot, amely elköltözteti a szám első számjegyét a szám végére, majd kiírja az így létrejött új számot.
//Ezt a műveletet addig ismételjük, amíg az eredeti számot vissza nem kapjuk! (Ne használjunk tömböt vagy karakterláncot!)

using namespace std;

int main()
{
   int n;
   cin >> n;
   int k;
   int forditott_szam;



  //alapgondolat
   k = n/10;
   forditott_szam=k % 10 + n % 10 + n / 100;



    return 0;
}

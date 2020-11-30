//Adva van egy legtöbb 10 számjegyet tartalmazó természetes szám. Írjunk programot,
//amely elköltözteti a szám első számjegyét a szám végére, majd kiírja az így létrejött új számot.
//Ezt a műveletet addig ismételjük, amíg az eredeti számot vissza nem kapjuk! (Ne használjunk tömböt vagy karakterláncot!)
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int c;
    cin>>c;
    int x=c;
    int db=0,uj=1;
    while(c>0)
    {
        db++;
        c=c/10;
    }

    int sz=pow(10,db-1);
    for(int i=1 ; i<=db ; i++)
    {
        x=x/sz+((x%sz)*10);
        cout<<x<<endl;
    }

     return 0;
}

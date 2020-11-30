#include <iostream>
#include <math.h>

using namespace std;

int szamol(int n)
{
    int s=0;
    if(n!=0)
        s++;
    while(n!=0)
    {
        s++;
        n/=10;
    }
    return s;
}

//Adva van egy legtöbb 10 számjegyet tartalmazó természetes szám.
//Írjunk programot, amely elköltözteti a szám elsõ számjegyét a szám végére, majd kiírja az így létrejött új számot.
//Ezt a mûveletet addig ismételjük, amíg az eredeti számot vissza nem kapjuk! (Ne használjunk tömböt vagy karakterláncot!)
int main()
{
    int n,m,seged,s;
    cin>>n;
    m=s;
    s=szamol(n);
    while(m!=0)
    {
        seged = n % (pow(10,s-1));
        n = n*10 + seged;
        m--;
        cout<<n<<" ";

    }
}

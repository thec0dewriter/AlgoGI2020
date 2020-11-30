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

//Adva van egy legt�bb 10 sz�mjegyet tartalmaz� term�szetes sz�m.
//�rjunk programot, amely elk�lt�zteti a sz�m els� sz�mjegy�t a sz�m v�g�re, majd ki�rja az �gy l�trej�tt �j sz�mot.
//Ezt a m�veletet addig ism�telj�k, am�g az eredeti sz�mot vissza nem kapjuk! (Ne haszn�ljunk t�mb�t vagy karakterl�ncot!)
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

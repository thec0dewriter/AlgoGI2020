//2. Feladat - Vernes Anita Beatrix - Fsega GI2

#include <iostream>

using namespace std;

int osztas(int k)
{
    if(k<=1)
        return 1;

    return 10*osztas(k-1);
}

int palindrom_szamjegy(int n)
{
    if(n <= 0)
        return 0;
    return 1+palindrom_szamjegy(n/10);
}

int palindrom_vizsgal(int n,int oszto)
{
    if(n < 10)
        return 1;
    if(n/oszto != n%10)
        return 0;
    else
    {
        n = n % (oszto);
        n/=10;
        return palindrom_vizsgal(n,oszto/100);
    }

}
int main()
{
    int n;
    cin>>n;

    // meg fogja adni hany szamjegybol all a szam
    int db = palindrom_szamjegy(n);
    cout<<db;
    int oszto = osztas(db);
    cout<<oszto;
    if(palindrom_vizsgal(n,oszto) ==1 )
        cout<<"palindrom";
    else
        cout<<"nem palindrom";
    return 0;
}

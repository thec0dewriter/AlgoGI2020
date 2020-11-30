//3. Feladat - Vernes Anita Beatrix - Fsega GI2

#include <iostream>

using namespace std;

int osztas(int k)
{
    if(k<=0)
        return 1;

    return 10*osztas(k-1);
}
int szamjegyek_szama(long long n)
{
    int k =0;
    while(n!=0)
    {
        k++;
        n/=10;
    }
    k--;
    return k;
}

int szamjegy_var(long long n,long long x,long long nuj,long long nregi,int oszto)
{
    if(n == x)
        return 0;

    nregi = n;
    nuj = n / oszto;
    n = (nregi % oszto)*10+nuj;
    cout<<n<<endl;
    szamjegy_var(n,x,nuj,nregi,oszto);
}

int main()
{
    long long n,x,nuj,nregi;
    cin>>n;
    x = n;
    int k = szamjegyek_szama(n);
    int oszto = osztas(k);

    nuj = n / oszto;
    n = (x % oszto)*10+nuj;
    cout<<n<<endl;
    nregi = n;
    if(szamjegy_var(n,x,nuj,nregi,oszto) == 0)
        cout<<x;
    return 0;
}

#include <iostream>

using namespace std;

int cut(unsigned long long n)
{
    if(n<10)
        return 1;
    else
        return 1 + cut(n/10);
}

bool isPal(int t[], int n, int i)
{
    if(i<n/2 && t[i]==t[n-1-i])
        return isPal(t, n, i+1);
    else if(i<n/2 && t[i]!=t[n-1-i])
        return false;
    return true;
}

int main()
{
    unsigned long long n;
    cin>>n;
    int nSize;
    nSize = cut(n);
    int t[nSize];

    for(int i=0; i<nSize; i++)
    {
        t[i]=n%10;
        n /= 10;
    }

    if(isPal(t, nSize, 0))
        cout<<"palindrom";
    else
        cout<<"nem palindrom";

    return 0;
}

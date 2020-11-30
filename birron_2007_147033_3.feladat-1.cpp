#include <iostream>

using namespace std;

int cut(unsigned long n)
{
    if(n<10)
        return 1;
    else
        return 1 + cut(n/10);
}

int pow(int szam, int hatvany)
{
    int t=1;
    for(int i=1; i<=hatvany; i++)
        t=t*10;
    return t;
}

int main()
{
    unsigned long n, nSave;
    cin>>n;
    nSave = n;
    int nSize = cut(n);

    int t = n%10;
    n /= 10;
    n = t*pow(10, nSize-1)+ n;
    cout<<n<<endl;

    while(n!=nSave)
    {
        t = n%10;
        n /= 10;
        n = t*pow(10, nSize-1)+n;
        cout<<n<<endl;
    }
    return 0;
}

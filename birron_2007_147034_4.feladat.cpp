#include <iostream>

using namespace std;

int numof1(int n)
{
    int db=0;
    while(n>0)
    {
        if(n%2==1)
            db++;
        n /= 2;
    }
    return db;
}

int main()
{
    int a, b, k;
    cin>>a>>b>>k;

    for(int i=a; i<=b; i++)
        if(numof1(i)==k)
            cout<<i<<' ';

    return 0;
}

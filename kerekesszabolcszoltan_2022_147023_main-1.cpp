#include <iostream>
#include <math.h>
//f2
using namespace std;


bool palindrom(int n)
{
    int z=n;
    int k=0;

    if(n==0&&z==k) return 1;
    else if(n==0) return 0;
    k=k*10+n%10;
    return  palindrom(n=n/10);

}

int main()
{
    int n;
    cin>>n;
    if(palindrom(n)==1)cout<<"Igen";
    else cout<<"Nem";

    return 0;
}

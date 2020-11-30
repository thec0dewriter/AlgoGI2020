#include <iostream>
#include <math.h>

using namespace std;

int szamol(int n)
{
    int s=0;
    if(n!=0) s++;
    while(n/10 != 0)
        {s++;
        n/=10;}
    return s;

}

bool pal(int n,int m,int s)
{
   if(m==0) return false;
        else if(n%10 == m/pow(10,s-1))
            pal(n%pow(10,s-1),m/10,s-1);
            else return true;

}

int main()
{
    int n,s,m;
    cout<<"n= ";
    cin>>n;
    s = szamol(n);
    m=n;
    pal(n,m,s);


}

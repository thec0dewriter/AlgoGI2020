#include <iostream>

using namespace std;
int rekurzio(int n, int s);
int main()
{
    int n=12321;
    int s=rekurzio(n,0);

    if(s==n) cout<<"palindrom";
    else cout<<"nem palindrom";
    return 0;
}
int rekurzio(int n, int s)
{
    if(n==0) return s;
    else
    {
        s=(s*10)+(n%10);
        return rekurzio(n/10,s);
    }
}

#include <iostream>

using namespace std;

int palindrome(int n,int szamol)
{
    if(n!=0)
    {
        return (szamol+palindrome(n/10,n%10))*10;
    }
}


int main()
{
    int n,szamol;
    cout<<"Olvassa be a szamot:";
    cin>>n;
    szamol=(n%10)*10;
    cout<<palindrome(n,szamol);
    return 0;
}

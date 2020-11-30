#include <iostream>

using namespace std;

int palindrom(int n){
    if(n!=0) return n%10 + palindrom(n/10) * 10;



}

int main()
{
    int n, y;
    cout<<"A szam = "; cin>>n;

    y = n;
    cout<<palindrom(n)<<endl;

    if(palindrom(n) == y) cout<<"Palindrom";
        else cout<<"Nem palindrom";

    return 0;
}

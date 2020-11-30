//Állapítsuk meg (rekurzív algoritmussal), hogy az adott n 64 bites természetes szám palindromszám-e vagy sem!
#include <iostream>

using namespace std;
int uj=0;
int fordit(int n,int b)
{
    if(n=0) return 0;
    else return fordit(n/10,b*10)+n%10*b;
}


int main()
{
    int n,b=1;
    cin>>n;
    int m=n;
    cout<<uj;
    if (fordit(n,b)==m)
    {
        cout<<"palindrom";
    }
    else cout<<"nem";

    return 0;
}

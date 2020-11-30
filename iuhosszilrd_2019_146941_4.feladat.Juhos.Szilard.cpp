#include <iostream>

using namespace std;

int main()
{
    int a=INT_MIN,b=INT_MAX,k;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"k=";
    cin>>k;
    k=k*k;
    for(int i=a;i<b;i++)
    {
        if(i>a && i<b && i!=k)
            cout<<i<<" ";
    }
    return 0;
}

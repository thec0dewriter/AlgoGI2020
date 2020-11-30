#include <iostream>

using namespace std;

int main()
{
    int n,a[10],index_max,i,j,seged;
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a=";
        cin>>a[i];
    }
    index_max=i;
    for(j=i+1;j<n-1;j++)
    {
        if(a[index_max]>a[j])
            index_max=j;
    }
    seged=a[i];
    a[i]=a[index_max];
    a[index_max]=seged;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

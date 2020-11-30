#include <iostream>
#include <fstream>
using namespace std;
//f1
int main()
{
    int n,a[10000],maxi;
    ifstream f("be.txt");
    f>>n;

    for(int i=0;i<n;i++)
        f>>a[i];

    for(int i=0;i<n;i++)
    {
        maxi=i;
        for(int j=i+1;j<n;j++)
            if(a[j]>a[maxi])maxi=j;

        swap(a[i],a[maxi]);


    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    /*a[maxi]=a[maxi]+a[i];
    a[i]=a[maxi]-a[i];
    a[maxi]=a[maxi]-a[i];*/



    return 0;
}

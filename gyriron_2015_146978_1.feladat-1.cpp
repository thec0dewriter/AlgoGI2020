#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,a[50],maximum,seged,index;
    cout<<"Olvassa be az elemszamot:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<endl;
    }
    maximum=a[0];
    index=0;
    for(int i=1;i<n;i++)
    {
        if(maximum<a[i])
        {
            seged=maximum;
            maximum=a[i];
            a[i]=seged;
        }else
        {
            seged=a[i];
            a[i]=maximum;

        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

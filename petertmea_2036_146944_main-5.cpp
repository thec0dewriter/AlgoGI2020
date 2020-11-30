#include <iostream>

using namespace std;

int main()
{
    int n=0, a[100];
    cout<<"Adja meg az n erteket: ";
    cin>>n;
        for(int i=0;i<=n;i++)
        {
         if(i>i+1)
            cout<< i;
        else
            i++;
        }



    return 0;
}

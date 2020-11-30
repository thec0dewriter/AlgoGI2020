#include <iostream>
#include <fstream>

using namespace std;

void MinSort(unsigned long long arr[], int n)
{
    int minim = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
                if(arr[j]<arr[minim])
                    minim = j;
        unsigned long long t = arr[minim];
        arr[minim] = arr[i];
        arr[i] = t;
    }
}

int main()
{
    ifstream f("bemenet.txt");
    int n;
    f>>n;
    unsigned long long x[n];
    for(int i=0; i<n; i++)
        f>>x[i];
//
    MinSort(x, n);

    for(int i=0; i<n; i++)
        cout<<x[i]<<endl;

    f.close();
    return 0;
}

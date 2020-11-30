#include <iostream>
#include <fstream>

using namespace std;

ifstream f("szam.txt");

void Maximumkivalsztas(int n, unsigned long long a[]);

int main()
{
    int n;
    unsigned long long a[100];
    f>>n;
    for(int i=1; i<=n; ++i)
    {
        f>>a[i];
    }
    Maximumkivalsztas(n,a);
    for(int i=1; i<=n; ++i)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

void Maximumkivalsztas(int n, unsigned long long a[])
{
    int max_index;
    unsigned long long tmp;
    for(int i=n; i>1; --i)
    {
        max_index=i;
        for(int j=i-1; j>=1; --j)
        {
            if(a[max_index]<a[j])
            {
                max_index=j;
            }
        }
        tmp=a[i];
        a[i]=a[max_index];
        a[max_index]=tmp;
    }
}

#include <iostream>
#include <fstream>
using namespace std;

void beolvas(long long int &n, long long int x[])
{
   ifstream f("Untitled1vizsga1.txt");
   f >> n;
   for(int i=1; i<=n;i++){
    f >>x[i];
   }

}
void kiir(long long int n, long long int x[])
{
    for(int i=1;i<=n;i++){
        cout << x[i]<< " ";
    }
}

void rendez(long long int n, long long int x[])
{
    int pozmax;
    for(int i=n; i>=2; i--){
        pozmax=i;
        for(int j=i-1;j>=1; j--){
            if(x[j]>x[pozmax]){
                pozmax = j;
            }
        }
        int seged = x[i];
        x[i]= x[pozmax];
        x[pozmax] = seged;
    }
}
int main()
{
    long long int n, x[100];

    beolvas(n,x);
    kiir(n,x);
    return 0;
}

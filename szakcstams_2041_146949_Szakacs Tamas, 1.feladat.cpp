#include <iostream>

using namespace std;

void kiir (int n, int x[]){
    for(int i = 1; i <= n; i++)
        cout<<x[i]<<" ";
        cout<<endl;
}
void csere(int & a, int & b){
    int x = a;
    a = b;
    b = x;
}
void maximumrendezes(int n , int x[]){
    for(int i = 1 ; i < n; i++){
        int maxindex = i;

        for(int j = 1; j <= n; j++){
            if (x[maxindex] < x[j])
                maxindex = j;
        }
        csere(x[i], x[maxindex]);
    }
}


int main()
{
    cout<<" Maximumkivalasztasra epulo rendezes!"<<endl;
    int x[] = {5, 11, 5, 7, 2, 3};
    int n = 5;

    cout<<endl;
    cout<< "A sorozatunk: ";
    kiir(n, x);
    cout<<endl;

    maximumrendezes(n, x);

    cout<<" A rendezett sorozatunk: ";
    kiir(n, x);
    cout<<endl;

    return 1;
}

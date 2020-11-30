#include <iostream>
#include <fstream>
using namespace std;

void max_kiv(){
    int n, x, v[100], seged, rendezett;

    ifstream f("szamok.in");

    f>>n;
    for(int i=1; i<=n; i++){
        f>>x;
        v[i]=x;
    }

    do{
       rendezett = 1;
       for(int i=1; i<=n; i++)
            if(v[i] > v[i+1]) {
                rendezett = 0;
                seged = v[i];
                v[i] = v[i+1];
                v[i+1] = seged;
            }
    }while(!rendezett);


    for(int i=1; i<=n; i++)
        cout<<v[i]<<" ";



}


int main()
{
    max_kiv();
    return 0;
}

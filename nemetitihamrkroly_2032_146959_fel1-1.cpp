#include <iostream>

using namespace std;

int main()
{
    int v[10000],n,i,maximum,rendezett[10000],j;

    cout<<"n=";cin>>n;

    for(i=1;i<=n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }

    maximum = v[1];
    for(i=1;i<=n;i++){
        if(v[i]>maximum){
            maximum=v[i];
        }
    }
    return 0;
}

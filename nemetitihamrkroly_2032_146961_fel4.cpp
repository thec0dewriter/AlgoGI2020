#include <iostream>

using namespace std;

int main(){

    int a,b,i,k,egyesek=0;

    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"k=";cin>>k;

    for(i=a;i<=b;i++){
        while(i){
            if(i/2==1){egyesek++;
            i=i/10;
            }
            if(egyesek==k){
                cout<<i<<"\n";
            }
        }

    }

return 0;
}

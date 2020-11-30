#include <iostream>

using namespace std;

int forditott(int n){
    int ford=0;
    while(n){
        ford=ford*10+n%10;
        n=n/10;
    }
return ford;

}

int main()
{

    int n,m;
    cout<<"n=";cin>>n;
    m=forditott(n);
        if(n==m){cout<<"palindrom";
        }
    else {cout<<"nem palindrom"
    }
return 0;
}

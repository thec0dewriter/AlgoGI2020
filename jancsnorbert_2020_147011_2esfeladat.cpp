#include <iostream>

using namespace std;

void palindrom(int a, int &b){
    int szamjegy;
    if (a > 0) {
        szamjegy = a%10;
        a = a/10;
        b = b*10 + szamjegy;
        palindrom(a,b);
    }
}

int main(){
    int n, eredmeny=0;
    cout<<"n= ";
    cin>>n;
    palindrom(n, eredmeny);
    if (n == eredmeny) cout<<"palindrom";
    else cout<<"nem palindrom";
}
#include <iostream>

using namespace std;

int main(){
    int a, b, k, szam, db=0;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"k= ";
    cin>>k;
    for (a; a<=b; a++) {
        szam=a;
        while (szam != 0 || db <= k) {
            if (szam%2 == 1) {
                db++;
            }
            szam = szam/2;
            cout<<szam;
        }
        if (db == k) {
            cout<<a<<" ";
        }
        db=0;
    }
}
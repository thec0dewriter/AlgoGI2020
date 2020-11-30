#include <iostream>

using namespace std;

int main()
{
    long long int szam , a,regi;
    cout << "szam" << endl;
    cin >> szam;
    regi =szam;
    a=szam;
    int db=0;
    while(a!=0){
        a =a/10;
        db++;
    }
    long long int hatv = 1;
    for (int i=1;i<db;i++){
        hatv = hatv *10;
    }
    do{
        int temp = szam / hatv;
        szam = szam % hatv;
        szam = szam * 10;
        szam= szam + temp;
        cout << szam << endl;
    }
    while(regi != szam);

    return 0;
}

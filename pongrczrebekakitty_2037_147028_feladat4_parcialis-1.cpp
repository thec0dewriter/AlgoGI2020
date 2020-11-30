#include <iostream>

using namespace std;

int alakit(int szam)
{
    int uj=0;
    int h=1;
    while(szam !=0){
        uj = (szam %2)*h+ uj;
        h = h*10;
        szam = szam /2;
    }
    return uj;
}
void megold( int a, int b, int k)
{
    int szj,db,szam;
    for(int i= a; i<=b; i++){
        szam = alakit(i);
        db=0;
        while(szam !=0){
            szj = szam % 10;
            szam = szam /10;
            if(szj == 1){
                db = db +1;
            }
        }
        if(db == k){
            cout <<i<<" ";
        }
    }
}
int main()
{
    int a,b,k;
    cout <<"mennyi a?";
    cin >> a;
    cout << "mennyi b?";
    cin >> b;
    cout << "mennyi k?";
    cin >> k;
    megold(a,b,k);
    return 0;
}

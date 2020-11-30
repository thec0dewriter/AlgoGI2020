// 2.cpp palindrom
//

#include <iostream>

using namespace std;

int palindrom(int szam, int p, int &uj) {
    
    if (szam != 0 || p != 0) {
        uj = (szam / 10) * p;
        return palindrom(szam / 10, p / 10, uj);
    }
    else return uj;
}

int main()
{
    int szam,uj, db = 1 ;
    cout << "Szam = ";
    cin >> szam;
    int regiszam = szam;
    while (szam != 0) {
        szam = szam / 10;
        db = db * 10;
    }
    int p = db / 10;
    
    if (palindrom(szam, p, uj) == regiszam) cout << "palindrom";
    return 0;

}


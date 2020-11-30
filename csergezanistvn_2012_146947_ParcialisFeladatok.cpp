// ParcialisFeladatok.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Csergezan Istvan, Gazdinfo 1., 1-es feladat

#include <iostream>

using namespace std;

/*

int main()
{
    int n;
    int szamok[10000];
    int ind_max = 0;

    cout << "Irja be, hogy hany szammal szeretne feltolteni a tombot, legtobb 10.000-el: "; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> szamok[i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (szamok[i] > szamok[j]) {
                ind_max = szamok[i];
                szamok[i] = szamok[j];
                szamok[j] = ind_max;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << szamok[i] << endl;

    return 0;
}

*/






/* Csergezan Istvan, Gazdinfo 1, 2-ik feladat.*/

/*int palindromszam(int szam, int palindrom, int eredmeny, int elso) {
    if (szam == 0)
        return 0;

    while ( szam > 10){
        elso = szam % 10; }

    if (szam / 10 == elso) {
        szam = szam / 10;
        szam = szam % 10;
    }
    else
    {
        palindrom; false; 
        return 0;
    }

    if (palindrom == true) {
         eredmeny = palindrom(szam, palindrom);
    }
}

int main()
{
    int szam;
    int palindrom = true;
    int eredmeny = 0;

    cout << "Irjon be egy szamot: "; cin >> szam;

    cout << eredmeny;

    return 0;
}

*/






/* Csergezan Istvan, Gazdinfo 1, 3-as feladat.*/

int valtas(int szam, int elso, int utolso, int ujszam, int kapott) {
    if (szam < 10)
        return 0;


    while (szam > 10) {
        kapott = szam % 10;
        utolso = szam % 10;
    }

    ujszam = 

} 

int main()
{
    int szam;
    int elso = 0;
    int ujszam = 0;
    int kapott = 0;

    cout << "Irjon be egy, legtobb 10 szamjegyet tartalmazo termeszetes szamot: "; cin >> szam;

    return 0;
}


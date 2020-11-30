
/////PETER NANDOR GI2

#include <iostream>
#include <fstream >
#include <math.h>

using namespace std;

///1. Feladat: MAXIMUM KIVALASZTAS
/*
void maximum_kivaszlatas(unsigned long int n, unsigned long int a[]);
void kiir(unsigned long int n, unsigned long int a[]);

int main()
{
    ifstream f("be.txt");

    unsigned long int n;
    f >> n;

    unsigned long int a[10];
    for (int i = 0; i < n ; i++){
        f >> a[i];
    }

    maximum_kivaszlatas(n,a);
    kiir(n,a);

    return 0;
}
void maximum_kivaszlatas(unsigned long int n, unsigned long int a[]){
    int index_max;
    int seged;
    for (int i = 0; i < n; i++){
        index_max = i;
        for (int j = i+1; j < n; j++){
            if (a[index_max] < a[j]){
                index_max = j;
            }
        }
        seged = a[i];
        a[i] = a[index_max];
        a[index_max] = seged;
    }
}
void kiir(unsigned long int n, unsigned long int a[]){
    for (int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
}*/


//////2.Feladat PALINDROM SZAM-E
/*
int palindrom(int n){
    if (n == )
        return n;
    else
        cout << n << " ";
        return (n / palindrom (n / 10));
}

int main ()
{
    int n;
    cout << "n= ";
    cin >> n;
    if (palindrom(n) cout << n << " Palindrom" << endl;
        else cout << n <<" Nem palindrom" << endl;


}/*

//////3.Feladat SZAMJEGYES


/*
int szamjegy (int n){
    int db;
    while (n != 0){
        n = n / 10;
        db++;
    }
    return db;
}
int oszto2 (int db){
    int oszto2 = 0;
    if (db == 2) oszto2 = 1;
    else if (db == 3) oszto2 = 10;
    else if (db == 4) oszto2 = 100;
    else if (db == 5) oszto2 = 1000;
    else if (db == 6) oszto2 = 10000;
    else if (db == 7) oszto2 = 100000;
    else if (db == 8) oszto2 = 1000000;
    else if (db == 9) oszto2 = 10000000;
    else oszto2 = 100000000;
    return oszto2;

}

int main ()
{
    int n;
    cout << "n= ";
    cin >> n;

    int seged = n;
    int db = szamjegy(n);
    int oszto = pow(10,db-1);
    int oszto2_1 = oszto2(db);
    int szam = 0;

    while (n != szam){
        int maradek = seged % oszto;
        int utolso = seged / oszto;
        szam = maradek * (oszto / oszto2_1) + utolso;
        seged = szam;
        cout << szam << endl;
    }
}*/

//4. Feladat

bool binaris (int a){
    int db = 0;
    while (a != 1){
        if (a % 2 == 1){
            db++;
        }
    if (db == 2) return true;
    else return false;
    }
}
int main ()
{
    int a,b,k;

    cout << "a= ";
    cin >> a;

    cout << "b= ";
    cin >> b;

    cout << "k= ";
    cin >> k;

    for (int i = a; i <= b; i++){
        if (binaris(i) == k){
            cout << i << " ";
        }
    }
}

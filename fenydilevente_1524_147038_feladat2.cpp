#include <iostream>
#include <fstream>
using namespace std;
/*Állapítsuk meg (rekurzív algoritmussal),
 * hogy az adott n 64 bites természetes szám palindromszám-e vagy sem!
 * Bemenet:
12321
Kimenet:
palindrom*/

int * beolvas(int & n );
void kiir(int n, int t[]);
bool rekurzivPalindrome(int i, int n, int t[]);

int main() {
    int n;
    auto * t = beolvas(n);
    kiir(n, t);
    int i = 0;
    cout << "n = " << n << endl;
    if(rekurzivPalindrome(i, n - 1, t)){
        cout << "Palindrome";
    } else {
        cout << "Nem palindrome";
    }
    return 0;
}
bool rekurzivPalindrome(int i, int n, int t[]){
    if(i < n && (t[i] == t[n])) {
        rekurzivPalindrome(i + 1, n - 1, t);
    }else if(i >= n){
        return true;
    } else {
        return false;
    }
    /*if(t[i] == t[n]){
        return true;
    }  else if (i > n) {
        return false;
    } else {
        rekurzivPalindrome(i + 1, n - 1, t);
    }*/
}
void kiir(int n, int t[]){
    cout << "Elemek = ";
    for (int i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }
    cout << endl;
}

int * beolvas(int & n ){
    ifstream fromfile("input.txt");
    fromfile >> n;
    auto * p = new int[n];
    for (int i = 0; i < n; ++i) {
        fromfile >> p[i];
    }
    fromfile.close();
    return p;
}
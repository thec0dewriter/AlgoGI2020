#include <iostream>
#include <fstream>
using namespace std;
/*Rendezzünk egy n elemű (n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel!
 * A tömb 64 bites természetes számokat tartalmazhat!
 * A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.*/

int * beolvas(int & n );
void kiir(int n, int t[]);
void maximumKivRend(int n, int t[]);

int main() {
    int n;
    auto * t = beolvas(n);
    cout << "Elemek szama = " << n << endl;
    kiir(n, t);
    maximumKivRend(n, t);
    kiir(n, t);
    return 0;
}
void maximumKivRend(int n, int t[]){
    /*for (int i = 0; i < n - 1; ++i) {
        int max_ind = t[i];
        for (int j = i + 1; j < n; ++j) {
            if(t[max_ind] > t[j]){
                max_ind = j;
            }
        }
        int seged = t[i];
        t[i] = t[max_ind];
        t[max_ind] = seged;
    }*/
    for (int i = n - 1; i > -1; --i) {
        int max_ind = t[i];
        kiir(n ,t);
        for (int j = i - 1 ; j >= 0; --j) {
            if(t[j] > t[max_ind]){
                max_ind = j;
            }
        }
        int seged = t[i];
        t[i] = t[max_ind];
        t[max_ind] = seged;
    }
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
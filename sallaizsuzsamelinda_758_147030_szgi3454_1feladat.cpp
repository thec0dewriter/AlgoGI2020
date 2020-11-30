/* Rendezzünk egy n elemű (n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel!
A tömb 64 bites természetes számokat tartalmazhat! A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit. */
/* Helyesen lefut ha billentyuzetrol olvasom be az adatokat */

#include <iostream>
//#include <fstream>

using namespace std;

//ifstream be("bemenet.txt");

//int const maxDim = 5;

/*void beolvas (int n, int x[]){
be >> n;
for (int i=1;i<=n;i++)
    be >> x[i];
} */

void kiir (int n, int x[]){
for(int i=1;i<=n;i++)
    cout << x[i] << " ";
    cout << endl;
}

void csere (int & a, int & b){
int x =a;
a = b;
b = x;
}


void maximumrendezes (int n, int x[]){
for (int i=1; i<=n;i++){
int maxIndex = i;

for (int j=i+1; j<=n;j++){
    if (x[maxIndex] > x[j])
        maxIndex = j;

}
csere (x[i], x[maxIndex]);

}
}

int main(){

//int n = maxDim;
//int x[maxDim];

//beolvas(n,x);

int x[] = {5,11,5,7,2,3};
int n = 5;

cout << "a megadott sorozat: ";
kiir(n,x);

maximumrendezes(n,x);

cout << " a sorozat rendezve: ";
kiir(n,x);

//maximumrendezes(n,x);
}

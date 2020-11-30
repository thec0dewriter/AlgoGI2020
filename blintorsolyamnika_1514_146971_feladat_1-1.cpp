/*Rendezzünk egy n elemű (n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel! A tömb 64 bites
természetes számokat tartalmazhat! A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.*/

#include <iostream>

using namespace std;

void kiir(int n, int a[]) {   //az eredmény kiiratása
    for (int i = 0; i <= n; i++) {
        cout << a[i] << " ";
        cout << endl;
    }
}

void maximumRendezes(int n, int a[]){
   
    for (int i = 1; i <= n  ; i++) {
        int maxIndex = a[1];
        for (int j = i+1; j < n; j++) {
            if (a[j] < maxIndex) {
               int seged = a[j];
               a[j] = a[maxIndex];
               a[maxIndex] = seged;
            }
                 
        }
        
    }
  }



int main()
{
    int a[] = {11,5,7,2,3};
    int n = 5;

    maximumRendezes(n, a);
    kiir(n, a);
    
}


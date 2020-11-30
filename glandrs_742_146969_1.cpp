/**Rendezzünk egy n elemű (n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel! 
 * A tömb 64 bites természetes számokat tartalmazhat! A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.
 */

#include <iostream>
#include <fstream>
#include <algorithm>

void BeOlvas(int &n, int tomb[]);
void Kiir(int n, int tomb[]);
void MaxRend(int n, int tomb[]);

int main(){
    int n;
    if(n > 10000)
        std::cout << "hibas bemenet";
    int tomb[10000];
    BeOlvas(n, tomb);
    Kiir(n, tomb);
    MaxRend(n, tomb); 
    Kiir(n, tomb);
}

void BeOlvas(int &n, int tomb[]){
    std::ifstream f ("input1.txt");
    f >> n;
    for(int i = 0; i < n; i++){
        f >> tomb[i];
    }
}

void Kiir(int n, int tomb[]){
    std::cout << n << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << tomb[i] << std::endl;
    }
    std::cout << std::endl;
}

void MaxRend(int n, int tomb[]){
    for(int i = 0; i < n; i++){
        int max_Index = i;
        for(int j = i + 1; j < n; j++){
            if(tomb[max_Index] > tomb[j]) //ugyanez a kerdesem volt elmeletbol pszeudokoddal csak minimumossal asszem ott tomb[min_Index] helyett siman 
            //min_Indexet irtam :( es lehet a kacsacsort is forditva tettem 
                max_Index = j;  
        }
        std::swap(tomb[i],tomb[max_Index]);
    }
}
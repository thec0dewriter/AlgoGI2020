#include <iostream>
using namespace std;
/*
 * Adva van egy legtöbb 10 számjegyet tartalmazó természetes szám. Írjunk programot, amely elköltözteti
 * a szám első számjegyét a szám végére, majd kiírja az így létrejött új számot. Ezt a műveletet addig ismételjük,
 * amíg az eredeti számot vissza nem kapjuk! (Ne használjunk tömböt vagy karakterláncot!)
 * Bemenet
123
Kimenet
231
312
123*/
int main() {
    int n;
    cin >> n;
    int eredetiszam = n;
    int ujszam = 0;
    while (n > 0){
        int szamjegy = n % 10;
        ujszam = (ujszam + szamjegy);
        int elore = ujszam % 10;
        //cout << "Ujszam = " << ujszam << endl;
        n = n / 10;
        cout << elore << n << endl;
        ujszam = ujszam * 10;
    }

    return 0;
}
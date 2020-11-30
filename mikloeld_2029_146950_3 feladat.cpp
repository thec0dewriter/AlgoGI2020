
//Adva van egy legtöbb 10 számjegyet tartalmazó természetes szám.Írjunk programot,
// amely elköltözteti a szám első számjegyét a szám végére, majd kiírja az így létrejött új számot.
//Ezt a műveletet addig ismételjük, amíg az eredeti számot vissza nem kapjuk!(Ne használjunk tömböt vagy karakterláncot!)
#include <iostream>
using namespace std;


void koltoz(int n) {
	int n, nr = 0, sz = 0,i;
	for (i = 1; i <= n; i++) {
		while (n != 0) {
			nr = n % 10;
			n = n / 10;
			sz++;
		}
	}
}


int main()
{
	int n, sz = 0, nr = 0;
	cin >> n;
	koltoz(n);
}

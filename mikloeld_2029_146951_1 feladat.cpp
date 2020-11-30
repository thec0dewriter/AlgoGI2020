//Rendezzünk egy n elemű(n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel!
//A tömb 64 bites természetes számokat tartalmazhat!
//A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.

#include <iostream>
#include <fstream>
using namespace std;

void maximum(int n, int v[]) {
	int i, j, IND_MAX=0;
	for (i = 1; i < n-1; i++) {
		IND_MAX = i;
	}
	for (j = 1; j <= n; j++) {
		if (v[j] > IND_MAX) {
			swap(v[j], IND_MAX);

		}
	}
}

int main()
{
	ifstream  fin ("szamok.in");
	ofstream fout("szamok.out");
	int n, v[100], IND_MAX = 0;
	cin >> n;
	maximum(n, v);
}


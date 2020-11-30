//Állapítsuk meg (rekurzív algoritmussal), hogy az adott n 64 bites természetes szám palindromszám-e vagy sem!
#include <iostream>
#include <fstream>
using namespace std;
void palindrom(int n,int v[]) {
	int i,sz=0,nr=0;
	for (i = 1; i <= n; i++) {
		cin >> v[i];
	}
	for (i = 1; i <= n; i++) {
		while (n != 0) {
			nr= n % 10;
			n = n / 10;
			sz++;
			
		}
		if (v[i] = v[i + 1]) {
			cout << "palindrom";
		}
		else {
			v[i++];
		}
	}
}


int main()
{
	int n, v[100], sz, nr;
	ifstream fin("szamok.in");
	ofstream fout("szamok.out");
	palindrom(n, v);
}


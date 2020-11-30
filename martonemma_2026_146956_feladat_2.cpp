#include <iostream>
using namespace std;
int palindrom(int);
int main() {
	uint64_t n;
	int eredmeny;
	cout << "kerek egy szamot";
	cin >> n;
	eredmeny = palindrom(n);
	if (eredmeny == true)
		cout << "a szam palindrom szam";
	else
		cout << "a szam nem palindromszam";
	return 0;
}
int palindrom(int n) {
	int tomb[10000], m, i, db;
	i = 0;
	db = 0;
	while (n > 0) {
		m = n % 10;
		tomb[i] = 0;
		db = db + 1;
		n = n / 10;
		i = i + 1;
	}
	int ok = 0;
	for (i = 0; i < (db / 2)-1; i++) {
		for (int j = db - 1; j > (db / 2)+1; j--) {
			if (tomb[i] == tomb[j])
				ok = 1;
		}
	}
	if (ok == 1)
		return true;
	return false;
}
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int szam,n,db ,sz1,t;
	cout << "kerek egy szamot: ";
	cin >> szam;
	n = szam;
	db = 0;
	while (szam > 0) {
		szam = szam / 10;
		db = db + 1;
	}
	
	return 0;
}
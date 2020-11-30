// 1.cpp 
//

#include <iostream>
#include <fstream>
using namespace std;

void beolvasas(int &n, int a[]) {
    ifstream be("be.txt");
	be >> n;
	for (int i = 0; i < n; i ++ ) {
		be >> a[i];
	}
}
void csere(int &a, int &b) {
	int seged = a;
	a = b;
	b = seged;
}
void maxRendezes(int n, int a[]) {
	int maxi = a[0];
	bool voltcsere = true;
	int i = 1;
	while (!voltcsere && i < n){
		if (a[i] < maxi) {
			csere(maxi, a[i]);
			voltcsere = true;
		}
		else
		{
			voltcsere = false;
			i++;
		}
		
	}
}

int main()
{
	int n, a[10000];
	beolvasas(n, a);
	maxRendezes(n, a);
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	return 0;
   
}


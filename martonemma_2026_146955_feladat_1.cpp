#include <iostream>
using namespace std;
void maxkiv(uint64_t[], uint64_t);
int main() {
	uint64_t n, tomb[] = { 11,5,7,2,3 };
	n = sizeof(tomb) / sizeof(tomb[0]);
	maxkiv(tomb, n);
	cout << "a tomb elemei rendezve: " << endl;
	for (uint64_t i = 0; i < n; i++)
		cout << tomb[i] << " ";
		return 0;
}

void maxkiv(uint64_t tomb[], uint64_t n) {
	uint64_t max, temp, i;
	for (i = 0; i < n - 1; i++) {
		max = i;
		for (uint64_t j = i + 1; j < n; j++) {
			if (tomb[j] < tomb[max])
				max = j;
		}
		temp = tomb[i];
		tomb[i] = tomb[max];
		tomb[max] = temp;
	}
	
}
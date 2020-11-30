#include <iostream>

void maximumkivalasztas(int n, int tomb[]) {
	int max=tomb[0];
	for (int i = 0; i < n; i++) {
		if (tomb[i] > max) max = tomb[i];
		for (int j = i - 1; j >= 0; i--) {
			if (tomb[j] > tomb[i]) tomb[j] = tomb[i];
		}
	}
	for (int i = 0; i < n; i++) {
		std::cout<< tomb[i];
	}

	
}

int main()
{
	int n;
	std::cout << "Tomb elemeinek szam: ";
	std::cin >> n;
	int* tomb = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> tomb[i];
	}
	maximumkivalasztas(n, tomb);


}
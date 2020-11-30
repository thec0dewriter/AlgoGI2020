#include <iostream>

int main()
{
	int a = 1234;
	int szam_ford = 0;
	int seged = a;
	int seged2 = a;
	int db = 0;
	while (seged != 0) {
		db++;
		seged = seged / 10;
	}
	seged = a;
	std::cout << db;


	while (seged != 0) {
		szam_ford = szam_ford * 10 + seged % 10;
		seged = seged / 10;
	}
	std::cout << szam_ford;
	int i = 0;
	while (i != db) {
		a = a /( 10 * (db - 1));
		std::cout << a;
		a = seged2;
		i++;
	}

}
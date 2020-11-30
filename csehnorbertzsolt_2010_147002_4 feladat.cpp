// 4 feladat- Cseh Norbert Zsolt

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("be.txt");

void alakitszam(int &n,int k);

int main()
{
	int a, b,k,w[300];
//	f >> a;
//	f >> b;
	f >> k;
	for (int i = a; i < b; i++)
	{
	alakitszam(i,k);
	}
}
void alakitszam(int &n,int k)
{
	int sz = 0;

	while (n != 0)
	{
		if (n % 10 == 1)
			sz++;
	}
	if (sz == k)
		cout << n<<" ";
}
// 1 feladat. Cseh Norbert Zsolt GI-1

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("be.txt");
 
void rendezes(int w[300], int n);

int main()
{
	int n, w[300];
	f >> n;
	for (int i = 1; i <= n; i++)
	{
		f >> w[i];
	}
	rendezes(w, n);
	for (int i = 1; i <= n; i++)
	{
		cout << w[i] << " ";
	}

}

void rendezes(int w[300], int n)
{
	int seged=0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (w[j] < w[i])
			{
				seged = w[i];
				w[i] = w[j];
				w[j] = seged;
			}

		}

	}
}

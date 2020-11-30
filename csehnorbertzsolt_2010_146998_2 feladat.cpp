// 2 feladat
#include <iostream>

using namespace std;

void palindrom(int n,int t[300],int &i);

int main()
{
	int n, w[300] = { 0 },i=1;
	cout << "n=";
	cin >> n;
	int n2 = n;
	palindrom(n,w,i);
	int d = 0,j=1;
	while (j < i)
	{
		d = d * 10 +w[j];
		j++;
	}
	if (n2 == d)
	{
		cout << "Palindrom szam";
	}
	else
	{
		cout << "Nem palindrom";
	}
}

void palindrom(int n,int t[300],int &i)
{
	if (n != 0)
	{
		t[i] = n % 10;
		i++;
		palindrom(n / 10,t,i);
	}
	
}


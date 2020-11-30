/** HOLGYES ORSOLYA DOROTTYA, 3921 **/
/*Rendezzünk egy n elemű (n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel! A tömb 64 bites természetes
 számokat tartalmazhat! A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.*/



#include <iostream>
#include <fstream>
using namespace std;

long long * beker (int &n)
{
    ifstream be("be_fel1.txt");
    be >> n;
    long long * tomb = new long long [n + 1]; //1-tol valo indexeles miatt
    for (int i = 1; i <= n; i++)
        be >> tomb[i];
    be.close();
    return tomb;
}

long long * max_kivalaszt (int n, long long *tomb)
{
    for (int i = n; i > 1; i--)
    {
        int maximum = i;
        for (int j = i; j >= 1; j--)
        {
            if (tomb[j] > tomb[maximum])
                maximum = j;
        }
        int seged = tomb[i];
        tomb[i] = tomb[maximum];
        tomb[maximum] = seged;
    }
    return tomb;
}

void kiir (int n, long long *tomb)
{
    ofstream ki ("ki_maximum.txt");
    for (int i = 1; i <= n; i++)
        ki << tomb[i] << "\n";
    ki.close();
}

int main()
{
    int n;
    long long * tomb = beker (n);
    tomb = max_kivalaszt(n, tomb);
    kiir (n, tomb);
    delete[] tomb;
    return 0;
}

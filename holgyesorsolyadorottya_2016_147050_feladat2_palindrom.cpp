/** HOLGYES ORSOLYA DOROTTYA, 3921 **/
/*Állapítsuk meg (rekurzív algoritmussal), hogy az adott n 64 bites természetes szám palindromszám-e vagy sem!*/

#include <iostream>

using namespace std;

int hossz (int n)
{
    int db = 1;
    while (n > 0)
    {
        db = 10 * db;
        n = n / 10;
    }
    return db;
}

bool palindrom (unsigned long long n, int meret)
{
    if (meret = 10) return true;
    // ha ketszamjegyu es palindrom akkor
    else if ((n / meret) == (n % 10)) return ((n % meret) / (meret / 10), meret / 100);
    else return false;
}

int main()
{
    unsigned long long n;
    cin >> n;
    if (palindrom(n, hossz(n))) cout << "palindrom";
    else cout << "nem palindrom";
    return 0;
}

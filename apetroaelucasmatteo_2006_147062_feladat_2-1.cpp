#include <iostream>
#include <math.h>

using namespace std;

int Palindrom(int n, int szamjegyek);

int main()
{
    unsigned long int n;
    cout << "n=";
    cin >> n;
     int szamjegyek=0;
    while (n!=0){
        n=n/10;
        szamjegyek++;
    }
    cout << Palindrom(n, szamjegyek);

    return 0;
}

int Palindrom(int n, int szamjegyek){


int ujszam=0;
ujszam = ujszam + Palindrom(n/10, szamjegyek--)*pow(10, szamjegyek);
return ujszam;

}
/* A modszer amit alkalmazni akartam az hogy mindig levagom az utolso szamjegyet es felepitem ujra a szamot a kovetkezokeppen:
ujszam = levagott szamjegy * 10^(szamjegyek szama)......
*/

#include <iostream>

using namespace std;

int main() {
    int palindrom, szam, forditott, eredeti;
    cin >> palindrom;

    eredeti = palindrom;

    while (palindrom != 0) {
        szam = palindrom % 10;
        forditott = (forditott * 10) + szam;
        palindrom = palindrom / 10;
    }

    if (forditott == eredeti) {
        cout << "palindrom" << endl;
    } else cout << "nem palindrom";
}

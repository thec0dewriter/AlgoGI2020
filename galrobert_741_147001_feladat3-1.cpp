#include <iostream>

using namespace std;

int alg(int szam);

int main() {
    int szam;
    cin >> szam;
    alg(szam);
}

int alg(int szam) {
    int eredeti = szam;
    int temp = szam;
    int x = 1;
    while(szam >= 10) {
        szam /= 10;
        x *= 10;
    }
    temp = temp - (szam * x);
    temp = (temp * 10) + szam;

    cout << temp;

    if(temp == eredeti) {
        cout << temp;
    } else {
        alg(temp);
    }

}
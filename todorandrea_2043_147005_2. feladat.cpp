#include <iostream>

using namespace std;
// 2. feladat
// �llap�tsuk meg (rekurz�v algoritmussal), hogy az adott n 64 bites term�szetes sz�m palindromsz�m-e vagy sem!

int palindrom(int n, int temp)
{
    if( n == 0)
        return temp;
    temp = (temp * 10) + (n % 10);
    return palindrom(n / 10, temp);
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;

    int temp = palindrom(n, 0);

    if(temp == n)
        cout << "palindrom" << endl;
    else
        cout << "nem palindrom" << endl;
    return 0;
}

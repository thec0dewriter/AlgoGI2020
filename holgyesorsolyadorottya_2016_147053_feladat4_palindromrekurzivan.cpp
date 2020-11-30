/** HOLGYES ORSOLYA DOROTTYA, 3921 **/
/*Írjunk programot, amely meghatározza és kiírja az összes a és b közötti egész számot,
amelyeknek bináris alakja k darab 1-es számjegyet tartalmaz!*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void beker(int &a, int &b, int &k)
{
    ifstream be ("be_fel4.txt");
    //bemenet egesz szamokkal pl 1, 10, 2
    be >> a;
    be >> b;
    be >> k;
    be.close();
}

string binaris (int n)
{
    string i = "0101";
    return i;
}

void k_1es (int a, int b, int k)
{
    ofstream ki ("ki_binarisk.txt");
    int db;
    for (int i = a; i <= b; i++)
    {
        string szam = binaris(i); //mert maskepp egybol atalakitana
        cout << szam << endl;
        while ((db <= k) && szam.length() > 0)
        {
            if (stoi(szam) % 10 == 1) db++;
            szam = szam.erase(3,1);
        }
        if (db == k) ki << i;
    }
    ki.close();
}

int main()
{
    int a, b, k;
    beker(a,b,k);
    k_1es(a,b,k);
    return 0;
}

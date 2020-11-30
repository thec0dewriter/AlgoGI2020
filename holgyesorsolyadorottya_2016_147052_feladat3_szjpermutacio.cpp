/** HOLGYES ORSOLYA DOROTTYA, 3921 **/
/*Adva van egy legtöbb 10 számjegyet tartalmazó természetes szám. Írjunk programot, amely elköltözteti a szám
első számjegyét a szám végére, majd kiírja az így létrejött új számot. Ezt a műveletet addig ismételjük, amíg
az eredeti számot vissza nem kapjuk! (Ne használjunk tömböt vagy karakterláncot!)*/
#include <iostream>
#include <fstream>

using namespace std;


int beker()
{
    unsigned int n;
    ifstream be ("be_fel2.txt");
    be >> n;
    be.close();
    return n;
}

int szj_szam_tiz (int n) //megszamolja hany szamjegy van a szamban es hatvanyozza a 10-et annyiadikra
{
    int szam = 1;
    while (n >= 10)
    {
        szam = 10 * szam;
        n = n / 10;
    }
    return szam;
}

void szj_permutacio (int n)
{
    ofstream ki ("ki_szjpermutacio.txt");
    int szam = n, szamjegyekszama = szj_szam_tiz(n);
    do
    {
        szam = szam % szamjegyekszama * 10 + szam / szamjegyekszama;
        ki << szam << "\n";
    } while (n != szam);
    ki.close();
}

int main()
{
    unsigned int n;
    n = beker();
    szj_permutacio(n);
    return 0;
}

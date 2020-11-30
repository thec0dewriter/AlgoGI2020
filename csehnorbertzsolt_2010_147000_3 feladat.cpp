// 3 feladat Cseh Norbert Zsolt Gi-1
#include <iostream>

using namespace std;

void szamlal(int n,int &db);
void alakit(int &n, int db, int n2);

int main()
{
    int n, db = 1;
    cout << "n = ";
    cin >> n;
    int n2 = n;
    szamlal(n, db);
    alakit(n, db, n2);
}

void szamlal(int n, int &db)
{
    while (n != 1)
    {
        n = n / 10;
        db=db*10;
    }
}
void alakit(int &n, int db,int n2)
{
    int seged = 0,uj=0;
    seged = n / db;
    uj = n % db;
    uj = uj * 10 + seged;
    cout << uj << " ";
    cout << endl;
     n = uj;
    while (n != n2)
    {
        alakit(n, db, n2);
    }
   
}
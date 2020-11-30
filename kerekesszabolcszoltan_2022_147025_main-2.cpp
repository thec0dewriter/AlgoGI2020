#include <iostream>
//f3
using namespace std;
int szamol(int x)
{
    int db=0;
    while(x)
    {
        db++;
        x/=10;
    }

    return db;
}

void eredeti(int a);
{
    int z=1;;
    while(db)
    {
        z*=10;
        db--;

    }
    int x=a%z;


}
int main()
{
    int a;
    cin>>a;
    eredeti(a);
    return 0;
}

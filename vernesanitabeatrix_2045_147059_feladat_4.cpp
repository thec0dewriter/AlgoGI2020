//4. Feladat - Vernes Anita Beatrix - Fsega GI2

#include <iostream>
#include <fstream>
using namespace std;

int binaris(int i,int db,int k)
{
    if(db == k)
        return 1;
    return
}
int main()
{
    ifstream fin("be.txt");
    int a,b,k;
    fin>>a>>b>>k;

    for(int i = a ; i <= b;i++)
    {
        if(binaris(i,0,k))
            cout<<i<<endl;
    }

    fin.close();
    return 0;
}

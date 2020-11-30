#include <iostream>

using namespace std;

void Meghataroz(int a, int b, int k);

int main()
{
    int a,b,k;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"k = ";
    cin>>k;
    Meghataroz(a,b,k);
    return 0;
}

void Meghataroz(int a, int b, int k)
{
    int maradek;
    int db=0;
    int szamjegyek[db];
    int masolat;
    int szamlalo;
    for(int i=a; i<=b; ++i)
    {
        szamlalo=0;
        db=0;
        szamjegyek[db]= {0};
        masolat=i;
        while(masolat>0)
        {
            maradek=masolat%2;
            szamjegyek[db]=maradek;
            db++;
            masolat=masolat/2;
        }
        for(int j=0; j<db; ++j)
        {
            if(szamjegyek[j]==1)
            {
                szamlalo++;
            }
        }
        if(szamlalo==k)
        {
            cout<<i<<endl;
        }
    }
}

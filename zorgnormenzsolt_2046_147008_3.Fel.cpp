#include <iostream>

using namespace std;

//Szamforgato
int main()
{
    int n, db=0, szamlalo, y;
    cout<<"n="; cin>>n;
    y = n;

    while(n!=0){
        db++;
        n=n/10;
    }

    szamlalo = db;

    for(int i=1; i<=szamlalo; i++){
        y = y/(10^(db-1)) +  (y%(10^(db-1)) * 10);
        cout<<y<<endl;
    }


    return 0;
}

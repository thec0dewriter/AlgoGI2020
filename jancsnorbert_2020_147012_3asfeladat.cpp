#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, seged, szamlalo=0, szamjegy;
    cout<<"n= ";
    cin>>n;
    seged=n;
    while (n>0) {
        szamlalo++;
        n=n/10;
    }
    cout<<szamlalo;
    n=seged;
    for (int i=0;i<szamlalo;i++) {
        szamjegy = n/(pow(10,szamlalo));
        n = (n%(pow(10,szamlalo)))*10+szamjegy;
        cout<<n<<endl;
    }
}
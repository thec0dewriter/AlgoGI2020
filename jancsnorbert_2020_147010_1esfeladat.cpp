#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, max, maxi=0, seged;
    ifstream f("1esfeladatinput.txt");
    ofstream g("1esfeladatoutput.txt");
    f>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        f>>a[i];
    }
    max=a[0];
    for (int i=0;i<n;i++) {
        for (int j=i;j<n;j++) {
            if (max<a[j]) {
                max=a[j];
                maxi=j;
            }
        }
        seged=a[i];
        a[i]=max;
        a[maxi]=seged;
        max=-1;
    }
    for (int i=0;i<n;i++) {
        g<<a[i]<<" ";
    }
}
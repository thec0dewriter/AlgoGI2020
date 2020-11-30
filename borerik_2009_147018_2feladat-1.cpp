#include <iostream>
#include <string>
using namespace std;

bool palindrom(string a, int i)
{
    if (i == a.length()-i+1)
    {
        return true;
    }

    char elso = a[i];
    char utolso = a[a.length()-i-1];

    if (i == a.length()-i)
        return elso == utolso;

    return elso == utolso && palindrom(a,i+1);
}





int main()
{
    string a;
    cin>>a;
    if (palindrom(a,0))
        cout<<"palindrom";
    else
        cout<<"nem palindrom";


    return 0;
}

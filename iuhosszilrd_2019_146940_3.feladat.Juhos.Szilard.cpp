#include <iostream>

using namespace std;

int main()
{
    int a,csereszam,x;
    x=a;
    while(csereszam!=x)
            while(x!=0)
            {
                csereszam=csereszam+a%10;
                x/=10;
            }
    if(csereszam==a)
        cout<<csereszam;

    return 0;
}

#include <iostream>

using namespace std;
int sum=0,rem;
int fordit(int n)
{
    if(n){
        rem = n%10;
        sum = sum*10+rem;
        fordit(n/10);
    }
    else
        return sum;
    return sum;
}
int main()
{

int n,uj,regi;
cin >>n;
regi =n; uj= fordit(n);
if(uj == regi){
    cout<< "palindrom";

}else{
    cout<<"nem";
}


    return 0;
}

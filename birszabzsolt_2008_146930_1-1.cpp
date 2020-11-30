//1. feladat
#include<iostream>
using namespace std;
int main(){
    int n;
    int xp=n;
    int arr[n];
    int swap;
    cout<<"Irja be hany elembol all a tomb: ";
    cin>>n;
    cout<<"Irja be az elemeket: ";
    cin>>arr[n];
    max(swap);
    cout<<max<<"";
void max(int xp){
    for (int i=0;i<=xp;i++){
        for (int j=0;j<=xp;j++){
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;
            if(swap<=xp){
                swap=swap+1;
            }
            
        }
    }

}
}

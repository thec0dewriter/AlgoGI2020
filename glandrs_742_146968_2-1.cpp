/**Állapítsuk meg (rekurzív algoritmussal), hogy az adott n 64 bites természetes szám palindromszám-e vagy sem!*/

#include <iostream>

int fordit(int n);
bool Palindrom(int n);


int main(){
    int n;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << Palindrom(n);
}
int fordit(int n){
    int szam = 0;
    do{
        return fordit(n);
        n--;
    }while(n = 0);
}

bool Palindrom(int n){
    bool palindrom = false;
    int szam = 0;
    if(n < 10)
        palindrom = true;
    else if(n == fordit(n))
        palindrom = true;
    return palindrom;
}

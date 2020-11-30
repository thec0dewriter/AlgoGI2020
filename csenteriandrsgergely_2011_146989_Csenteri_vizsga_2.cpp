#include <iostream>
#include <cmath>

void prim(int n, int a) {
    if (n % a != 0 && a<sqrt(n)) {
        prim(n, a + 1);
        std::cout << "Prim";
    }
    else if(n%a==0){
        std::cout << "Nem prim";
    }
}

int main()
{
    int a = 2;
    int n = 17;
    prim(n, a);
}

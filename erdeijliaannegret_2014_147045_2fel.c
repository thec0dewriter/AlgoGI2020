#include <stdio.h>
#include <stdlib.h>
//�llap�tsuk meg (rekurz�v algoritmussal), hogy az adott n 64 bites term�szetes sz�m palindromsz�m-e vagy sem!
void  palindrom (int n, int uj)
    {
        if (n==0)
            if (n==uj) return 1;
                else return 0;
            uj=uj*10+n%10;
            return palindrom(n/10, uj);
    }



int main()
{ int n,x,m,uj;
    printf("szam=");
    scanf ("%i", &n);
    m=n;
    palindrom(n,0);
    if (m==uj) printf("palindrom\n");
        else printf("nem palindrom\n");
    return 0;
}

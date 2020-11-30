#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Adva van egy legtöbb 10 számjegyet tartalmazó természetes szám. Írjunk programot, amely elköltözteti a szám első számjegyét a szám végére,
    //majd kiírja az így létrejött új számot.
     //Ezt a műveletet addig ismételjük, amíg az eredeti számot vissza nem kapjuk! (Ne használjunk tömböt vagy karakterláncot!)

        int n,m,uj,db;
        printf("n=");
        scanf("%i", &n);

        m=n;db=1;
        while (n>0){
            db=db*10;
            n=n/10;
        }

        n=m;
        while (uj!=m){
            uj=n%db*10 + n/db;
            printf("%i\n", uj);
            n=uj;
                    }
    return 0;
}

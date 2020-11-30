#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Rendezzünk egy n elemű (n <= 10 000) a tömböt maximumkiválasztásra épülő rendezéssel! A tömb
     //64 bites természetes számokat tartalmazhat! A bemenet első sora tartalmazza az n értéket, a többi n sor a sorozat elemeit.


    int a[100];
    int n,i, max, m, j, seged;
    printf("n=");
    scanf("%i", &n);
    for (i=0; i<n; i++)
        scanf ("%i", &a[i]);
    printf("\n");
    m=n; i=0;

    for (i=n; i>1; i--)
    {
         max=i;
         for (j=i-1; j<n; j++)
            if (a[max]<a[j])
         {
             max=j;
             x=a[i];
             a[i]=a[max];
             a[max]=x;
         }

    }
    for (i=0; i<n; i++)
        printf("%i \n", a[i]);

    return 0;

#include <stdio.h>
#include <stdlib.h>
//�rjunk programot, amely meghat�rozza �s ki�rja az �sszes a �s b k�z�tti eg�sz sz�mot, amelyeknek bin�ris alakja k darab 1-es sz�mjegyet tartalmaz!
int main()
{int a,b,x,j,i,db,k;
    printf("a=");
    scanf("%i", &a);
    printf("b=");
    scanf("%i", &b);
    printf("k=");
    scanf("%i", &k);
    if (a>b)
    {
        x=a;
        a=b;
        b=x;
    }
    for (i=a+1; i<b; i++){
            db=0; x=i;j=0;
        while (i>1){
            j=j*10+i%2;
            i=i/2;
            if (i%2==1) db=db+1;
        }
        if (db==k) printf("%i\n", x);
    }

    return 0;
}

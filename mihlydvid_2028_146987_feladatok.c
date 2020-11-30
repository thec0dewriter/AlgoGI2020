//ELSO FELADAT
/*
#include <stdio.h>
#include <stdlib.h>

void maximum(unsigned long, int);

int main(){
    int n,i;

    freopen("be.txt","r",stdin);
    scanf("%d",&n);

    unsigned long tomb[n];

    for(i=0; i<n; i++){
        scanf("%lu",&tomb[i]);
    }

    maximum(tomb[n], n);

    return 0;
}

void maximum(unsigned long tomb[], int n){
    unsigned long max=tomb[0], seged;

    for(int i=0; i<n; i++){
        if (max < tomb[i]){
            seged = max;
            max = tomb[i];
            tomb[i] = max;
        }
    }
    for (int i=0; i<n; i++){
        printf("%lu ", tomb[i]);
    }
}
*/

//Masodik feladat
/*
#include <stdio.h>
#include <stdlib.h>

void palindrom(unsigned long);

int main(){
    unsigned long n;

    printf("Adj meg egy szamot:");
    scanf("%lu", &n);

    palindrom(n);


    return 0;
}

void palindrom(unsigned long n){
    if (n == 0){
        
    }
}
*/

//Harmadik feladat
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,szamjegyek=0,szam,ujszam;

    printf("Adj meg egy szamot:");
    scanf("%d", &n);

    szam = n;

    while (n>0){
        n = n/10;
        szamjegyek++;
    }
    
    ujszam = szam;

    do
    {
        ujszam = (szam/10) + 
    } while (ujszam = szam);
    

    

    return 0;
}
*/

//Negyedik feladat
/*
#include <stdio.h>
#include <stdlib.h>

int binaris(int);

int main(){
    int a,b,k;

    printf("Adj meg ket szamot:");
    scanf("%d %d", &a, &b);

    printf("Ennyi a k:");
    scanf("%d", &k);




    return 0;
}

int binaris(int n){
   
}
*/
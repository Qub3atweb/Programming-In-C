#include <stdio.h>
#define MINSTAKOP 1000
#define RABATT 0.1

float antal, pris, summa;

int main(){

    antal=0;
    pris=0;
    summa=0;
    printf("Skriv in antal enheter:\n");
    scanf("%f", &antal);
    printf("Skriv in priset per styck: \n");
    scanf("%f", &pris);
    if ((antal*pris)>=MINSTAKOP) {
        summa= (pris*antal)*(1-RABATT);
        printf("Priset är: %6.2f \n", summa);
    }
    else {
        summa=pris*antal;
        printf("Priset är: %6.2f\n",summa);
    }
}
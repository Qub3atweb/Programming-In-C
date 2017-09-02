#include <stdio.h>
int main()
{
    float mil_ar;
    float mil_idag;
    float bensin_ar;
    mil_ar = 0;
    mil_idag = 0;
    bensin_ar = 0;
    printf("Skriv in miltal för ett år sedan \n"); scanf("%f", &mil_ar);
    printf("Skriv in miltal idag\n"); scanf("%f", &mil_idag);
    printf("Skriv in antal liter bensin på ett år\n"); scanf("%f", &bensin_ar);
    printf("Bilen har gått %.0f mil\n", mil_idag - mil_ar);
    printf("Genomsnittlig bensin förbrukning är: %.2f\n", bensin_ar / (mil_idag-mil_ar));
return 0;


}

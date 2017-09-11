#include <stdio.h>

int kvad(int k){
    return k*k;
}
int kub(int k){
    return k*k*k;
}

int main ()
{
    int n, i, i2;

    printf("Ange högsta värdet:\n");
    scanf("%d",&n);
    printf(" i         i*i         i*i*i\n");
    printf("===       =====       =======\n\n");
    for (i =1; i <= n; i++ ) {
        i2 =i*i;
        printf("%2d%11d%13d\n", i,kvad(i),kub(i));
    }

    return 0;
}
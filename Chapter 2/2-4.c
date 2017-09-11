#include <stdio.h>
#define SLUTSUMMA 1000000.0
int main()
{
    int dagar = 0;
    float sum = 0;
    float lon = 0.01;
while (sum < SLUTSUMMA)
{
    sum = sum + lon;
    lon = 2*lon;
    dagar++;
}
printf("Han måste jobba %d dagar för att nå %0.f kr\n", dagar, SLUTSUMMA);

return 0;
}
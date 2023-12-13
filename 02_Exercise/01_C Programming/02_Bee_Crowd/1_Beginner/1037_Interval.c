#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);

    if ((0 <= n) && (n <= 25))
    {
        printf("Intervalo [0,25]\n");
    }
    if ((25 < n) && (n <= 50))
    {
        printf("Intervalo (25,50]\n");
    }
    if ((50 < n) && (n <= 75))
    {
        printf("Intervalo (50,75]\n");
    }
    if ((75 < n) && (n <= 100))
    {
        printf("Intervalo (75,100]\n");
    }
    if ((n < 0) || (n > 100))
    {
        printf("Fora de intervalo\n");
    }

    return 0;
}
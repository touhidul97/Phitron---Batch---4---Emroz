#include <stdio.h>
int main()
{
    double value;
    scanf("%lf", &value);

    int notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        int count = value / notes[i];
        printf("%d nota(s) de R$ %d.00\n", count, notes[i]);
        value -= count * notes[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++)
    {
        int count = (int)(value / coins[i] + 0.5); // Round to the nearest integer
        printf("%d moeda(s) de R$ %.2lf\n", count, coins[i]);
        value -= count * coins[i];
    }

    return 0;
}

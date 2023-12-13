#include <stdio.h>
int main()
{
    int value;
    scanf("%d", &value);

    printf("%d\n", value);

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++)
    {
        int count = value / notes[i];
        printf("%d nota(s) de R$ %d,00\n", count, notes[i]);
        value -= count * notes[i];
    }
    return 0;
}
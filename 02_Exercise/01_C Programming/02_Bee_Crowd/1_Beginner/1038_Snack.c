#include <stdio.h>
int main()
{
    int code, unit;
    float total;
    scanf("%d%d", &code, &unit);

    if (code == 1)
    {
        total = unit * 4.00;
        printf("Total: R$ %.2f\n", total);
    }
    if (code == 2)
    {
        total = unit * 4.50;
        printf("Total: R$ %.2f\n", total);
    }
    if (code == 3)
    {
        total = unit * 5.00;
        printf("Total: R$ %.2f\n", total);
    }
    if (code == 4)
    {
        total = unit * 2.00;
        printf("Total: R$ %.2f\n", total);
    }
    if (code == 5)
    {
        total = unit * 1.50;
        printf("Total: R$ %.2f\n", total);
    }
    return 0;
}
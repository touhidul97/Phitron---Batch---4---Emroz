#include <stdio.h>
int main()
{
    char name[100];      // Assuming a maximum name length of 99 characters
    scanf("%99s", name); // Using %99s to prevent buffer overflow

    double fixed_salary, total_sale;

    scanf("%lf", &fixed_salary);
    scanf("%lf", &total_sale);

    double total;
    total = fixed_salary + (total_sale * 0.15);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
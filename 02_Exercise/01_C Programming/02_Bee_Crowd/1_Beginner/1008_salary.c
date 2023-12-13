#include <stdio.h>
int main()
{
    int employee_number, worked_hours;

    scanf("%d", &employee_number);

    scanf("%d", &worked_hours);

    float salary_per_hour;

    scanf("%f", &salary_per_hour);

    float salary;

    salary = worked_hours * salary_per_hour;

    printf("NUMBER = %d\n", employee_number);

    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}
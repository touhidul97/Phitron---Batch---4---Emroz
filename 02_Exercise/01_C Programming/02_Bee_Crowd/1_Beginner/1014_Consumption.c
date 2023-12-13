#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    double Y;
    scanf("%lf", &Y);

    double a_f;

    a_f = X / Y;

    printf("%.3lf km/l\n", a_f);

    return 0;
}
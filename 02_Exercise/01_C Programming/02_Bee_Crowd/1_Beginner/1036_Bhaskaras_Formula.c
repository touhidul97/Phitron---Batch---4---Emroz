#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, a2, r1, r2;
    scanf("%lf%lf%lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    a2 = 2 * a;
    if (discriminant < 0)
    {
        printf("Impossivel calcular\n");
    }
    else if (a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r1 = (-b + sqrt(discriminant)) / a2;
        r2 = (-b - sqrt(discriminant)) / a2;
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    // Arrange the sides in descending order
    if (a < b)
    {
        // Swap a and b
        double temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        // Swap a and c
        double temp = a;
        a = c;
        c = temp;
    }
    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {

        if (a * a == b * b + c * c)
        {
            printf("TRIANGULO RETANGULO\n");
        }

        if (a * a > b * b + c * c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if (a * a < b * b + c * c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if ((a == b) && (b == c))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (((a == b) && (b != c)) || ((b == c) && (c != a)) || ((a == c) && (c != b)))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
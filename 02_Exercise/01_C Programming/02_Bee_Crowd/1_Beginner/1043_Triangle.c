#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b)
    {
        float perimeter;
        perimeter = a + b + c;
        printf("Perimetro = %.1f\n", perimeter);
    }
    else
    {
        float trapezeum;
        trapezeum = 0.5 * (a + b) * c;
        printf("Area = %.1f\n", trapezeum);
    }
    return 0;
}
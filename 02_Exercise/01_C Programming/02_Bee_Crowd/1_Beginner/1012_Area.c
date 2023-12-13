#include <stdio.h>
double pi = 3.14159;

int main()
{
    double a, b, c;
    //-------------------------
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    //-------------------------
    double rectangle_triangle;
    rectangle_triangle = 0.5 * a * c;
    //-------------------------
    double circle;
    circle = pi * c * c;
    //-------------------------
    double trapezium;
    trapezium = 0.5 * (a + b) * c;
    //-------------------------
    double square;
    square = b * b;
    //-------------------------
    double rectangle;
    rectangle = a * b;
    //-------------------------
    printf("TRIANGULO: %.3lf\n", rectangle_triangle);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}
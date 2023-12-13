#include <stdio.h>
int main()
{
    float side_a, side_b;
    scanf("%f%f", &side_a, &side_b);

    float perimeter;

    perimeter = side_a * side_b;

    printf("Perimeter: %f", perimeter);
    return 0;
}
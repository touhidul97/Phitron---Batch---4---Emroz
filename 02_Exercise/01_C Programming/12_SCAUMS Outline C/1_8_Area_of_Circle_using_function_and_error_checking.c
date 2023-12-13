// 1_8_Area_of_Circle_using_function_and_error_checking
#include <stdio.h>
#define PI 3.14159
float process(float radius);

int main()
{
    float radius, area;
    printf("Radius=?\n");
    scanf("%f", &radius);
    if (radius < 0)
    {
        area = 0;
    }
    else
    {
        area = process(radius);
    }
    printf("Area= %f\n", area);
    return 0;
}

float process(float r)
{
    float a;
    a = PI * r * r;
    return (a);
}

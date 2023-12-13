// 1_7_Area_of_Circle_using_function.c
#include <stdio.h>
#define PI 3.14159
float process(float radius);

int main()
{
    float radius, area;
    printf("Radius=?\n");
    scanf("%f", &radius);
    area = process(radius);
    printf("Area= %f\n", area);
    return 0;
}

float process(float r)
{
    float a;
    a = PI * r * r;
    return (a);
}

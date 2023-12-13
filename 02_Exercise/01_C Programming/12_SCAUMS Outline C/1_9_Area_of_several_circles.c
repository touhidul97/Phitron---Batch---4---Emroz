// 1_9_Area_of_several_circles.c
#include <stdio.h>
#define PI 3.14159
float process(float radius);

int main()
{
    float radius, area;
    int count, n;
    printf("How many Circles ?");
    scanf("%d", &n);
    for (count = 1; count <= n; ++count)
    {
        printf("\nCircle no. %d: Radius=?", count);
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
    }
    return 0;
}

float process(float r)
{
    float a;
    a = PI * r * r;
    return (a);
}
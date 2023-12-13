#include <stdio.h>
#include <math.h>
#define PI 3.14159
float process(float radius);
int main()
{
    float radius, area;
    int count;
    printf("To stop , enter 0 for the radius\n");
    printf("\nRadius=?");
    scanf("%f", &radius);
    for (count = 1; radius != 0; count++)
    {
        if (radius < 0)
        {
            area = 0;
        }
        else
        {
            area = process(radius);
            printf("Area= %f\n", area);
            printf("\nRadius=?");
            scanf("%f", &radius);
        }
    }
    return 0;
}
float process(float r)
{
    float a;
    a = PI * pow(r, 2);
    return a;
}
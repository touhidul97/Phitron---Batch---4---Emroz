#include<stdio.h>
int main()
{
    double x = 5.25;
    double *ptr = &x;
    double *ptr2 = ptr;
    // *ptr = 10.25;
    *ptr2 = 100.50;
    printf("x er value - %0.2lf\n", x);
    printf("x er value - %0.2lf\n", *ptr);
    printf("ptr er size - %d\n", sizeof(ptr));
    
    return 0;
}
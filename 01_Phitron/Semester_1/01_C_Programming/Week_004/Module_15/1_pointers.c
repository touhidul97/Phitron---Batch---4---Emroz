#include<stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    x = 200;
    // printf("x er address : %p\n", &x);
    // printf("ptr er value : %p\n", ptr);
    // printf("ptr er address : %p\n", &ptr);
    // printf("ptr er memory size : %p\n", sizeof(ptr));

    printf("x er value - %d\n", x);
    printf("x er value - %d\n", *ptr);//de reference

    return 0;
}
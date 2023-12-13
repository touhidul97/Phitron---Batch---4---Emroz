#include<stdio.h>
void fun(int *p)
{
    *p = 500;
    // printf(" main er x er value - %d", *p);
    // printf("p er value - %p\n", p);
}
int main()
{
    int x = 10;

    // printf("x er address - %p\n", &x);
    fun(&x);
    printf("%d", x);
    return 0;
}
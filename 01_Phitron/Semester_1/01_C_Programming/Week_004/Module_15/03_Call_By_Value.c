#include<stdio.h>
void fun(int x)
{
    x = 1000;
    printf(" fun x er address - %p\n", &x);
    printf(" fun er x er value - %d\n", x);
}
int main()
{
    int x = 100;
    printf("main x er address - %p\n", &x);
    fun(x);
    printf(" main er x er value - %d\n", x);
    return 0;
}
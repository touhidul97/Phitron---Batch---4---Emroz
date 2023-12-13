#include<stdio.h>
void swap_it(int a, int b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(a,b);
    return 0;
}
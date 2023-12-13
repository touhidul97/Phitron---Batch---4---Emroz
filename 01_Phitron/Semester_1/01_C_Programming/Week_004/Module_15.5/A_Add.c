#include<stdio.h>
void fun_sum(int a, int b)
{
    int x, y;
    scanf(" %d %d", &x, &y);
    int sum = x + y;
    printf("%d\n", sum);
}
int main()
{
    int x, y;
    fun_sum(x,y);
    return 0;
}
#include<stdio.h>
void my_abs(int n)
{
    if (n>=0)
    {
        n = n;
        printf("%d", n);
    }
    else
    {
        n = n * (-1);
        printf("%d", n);
    }
} 
int main()
{
    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}

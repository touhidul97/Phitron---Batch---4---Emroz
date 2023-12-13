#include<stdio.h>
void count_odd(int *a, int n) 
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2!=0)
        {
            count++;
        }
    }
    printf("%d", count);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    count_odd(a, n);
    return 0;
}
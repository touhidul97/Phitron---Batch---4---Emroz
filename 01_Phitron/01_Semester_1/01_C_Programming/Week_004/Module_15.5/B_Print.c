#include<stdio.h>
void fung(int n)
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        printf("%d", i);
        if(i<a)
        {
            printf(" ");
        }
    }
    
}
int main()
{
    int n;
    fung(n);
    return 0;
}
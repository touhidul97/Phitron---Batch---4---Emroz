#include<stdio.h>
int main()
{
    int n;
    //taking the array size
    scanf("%d", &n);
    int a[n];
    //taking input 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //running array in reverse order
    for (int i = n-1; i>=0; i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
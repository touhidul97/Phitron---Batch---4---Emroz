#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
            scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum is %d\n",sum);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",a[i]);
    // }
    
    
    return 0;
}
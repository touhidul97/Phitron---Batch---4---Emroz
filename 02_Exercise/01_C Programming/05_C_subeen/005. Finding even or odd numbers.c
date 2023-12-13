#include<stdio.h>
int main()
{
    int a;
    printf("Please Enter The Number:\n");
    scanf("%d",&a);
    printf("Results:\n");
    if(a%2==0)
    {
        printf("%d is Even\n",a);
    }
    else
    {
        printf("%d is Odd\n",a);
    }
    return 0;
}

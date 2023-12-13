#include<stdio.h>
int main()
{
    int a, b,sum,multi;
    printf("Please Enter the First Number:\n");
    scanf("%d",&a);

    printf("Please Enter the Second Number:\n");
    scanf("%d",&b);
    sum = a+b;
    multi=a*b;
    printf("The Sum is : %d\n",sum);
    printf("The Multiplication is : %d\n",multi);
    return;
}

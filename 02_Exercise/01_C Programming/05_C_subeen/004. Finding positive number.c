#include<stdio.h>
int main()
{
    float a;
    printf(" Please Enter the number :\n");
    scanf("%f",&a);
    if(a>0)
    {
        printf("%f is Positive\n",a);
    }
    else
    {
        printf("%f is not Positive\n",a);
    }
    return 0;
}

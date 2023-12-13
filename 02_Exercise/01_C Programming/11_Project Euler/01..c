#include<stdio.h>
int main()
{
    int number=1,sum=0;
    while(number<1000)
    {
        if(number%3==0||number%5==0)
        {
            sum=sum+number;
        }
        number=number+1;
    }
    printf("%d",sum);
    return 0;
}

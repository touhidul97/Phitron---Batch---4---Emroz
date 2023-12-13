#include<stdio.h>
int main()
{
    float a,b,c,answer;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b&&a>c)
    {
        answer==a+5;
    }
    else if(b>a&&b>c)
    {
        answer==b+6;
    }
    else
    {
        answer==c+9;
    }
    printf("%f",answer);
    return 0;
}

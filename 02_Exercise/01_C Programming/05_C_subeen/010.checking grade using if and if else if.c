#include<stdio.h>
int main ()
{
    float marks;
    printf("Please Enter Your Marks\n");
    scanf("%f",&marks);
    if(marks>=80)
    {
        printf("Grade=A+\n");
    }
    else if(marks>=70)
    {
        printf("Grade=A\n");
    }
    else if(marks>=60)
    {
        printf("Grade=A-\n");
    }
    else if(marks>=50)
    {
        printf("Grade=B\n");
    }
    else if(marks>=40)
    {
        printf("Grade=C\n");
    }
    else if(marks>=33)
    {
        printf("Grade=D\n");
    }
    else
    {
        printf("Grade=F\n");
    }

    return 0;
}


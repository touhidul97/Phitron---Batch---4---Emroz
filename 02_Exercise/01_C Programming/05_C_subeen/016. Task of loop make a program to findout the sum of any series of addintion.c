#include<stdio.h>
int main()
{
    int i,starting_value,difference,ending_value,sum=0;
    printf("Enter the first value of the Series\n");
    scanf("%d",&starting_value);
    printf("Enter the difference between any two consecutive number of the Series\n");
    scanf("%d",&difference);
    printf("Enter the Ending value of the Series\n");
    scanf("%d",&ending_value);
    for(i=starting_value;i<=ending_value;i=i+difference)
    {
        sum=sum+i;
    }
    printf("The Sum of the series is=%d",sum);
    return 0;
}

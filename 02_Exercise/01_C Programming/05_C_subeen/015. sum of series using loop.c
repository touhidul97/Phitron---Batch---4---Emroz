#include<stdio.h>
int main()
{
    //we have to find out the sum of the series 5+10+.....+1000
    //Since it's a series of integers so we are going to use int type variable.
    //we are going to find the sum so we need another variable called sum.

    int i,sum;
    i=5;//since the first value of the series is
    sum=0;//since we haven't started the loop so right now the sum will be zero.
    while(i<=1000)//out loop will run until the value of i is less or equal to 1000
    {
        sum=sum+i;
        i=i+5;
    }
    printf("The sum of the series = %d",sum);
    return 0;
}

/* Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input. */



#include<stdio.h>
int main()
{
    int n;
    
    int even=0, odd=0, positive=0, negative=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        int num;
        scanf("%d",&num);
        
        if(num%2==0)
        {
            even=even+1;
        }
        if(num%2!=0)
        {
            odd=odd+1;
        }
        if(num>0)
        {
            positive=positive+1;
        }
        if(num<0)
        {
            negative=negative+1;
        }
    }
    printf("Even: %d\n",even);

    printf("Odd: %d\n",odd);
    
    printf("Positive: %d\n",positive);
    
    printf("Negative: %d\n",negative);

    return 0;
}
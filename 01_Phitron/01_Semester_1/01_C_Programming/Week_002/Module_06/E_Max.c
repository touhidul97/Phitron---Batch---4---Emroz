/* Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number. */
#include<stdio.h>
int main()
{
    int n;
    int num;
    int max=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&num);
        
        if(num>=max)
        {
            max=num;
        }
        
    }
    printf("%d\n",max);
    return 0;
}

/* #include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int num;
    int max=INT_MIN, min=INT_MAX;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&num);
        
        if(num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
    }
    printf("%d %d\n",min, max);
    return 0;
}
 */
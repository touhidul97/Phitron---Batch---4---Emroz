//loop condition to find odd and even between 1 to 10
// লুপের মধ্যে condition


#include<stdio.h>
int main()
{   
    for(int i=1; i<=10; i++)
    {   
        if(i%2!=0)
        {    
        printf("%d - ODD\n",i);
        }
        else
        {
        printf("%d - EVEN\n",i);
        }
    }
    return 0;
}
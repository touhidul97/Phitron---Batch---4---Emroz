#include<stdio.h>
int main()
{
    //declare the array
    int a[10];
    
    //taking input for the array
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    //showing output of the array
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
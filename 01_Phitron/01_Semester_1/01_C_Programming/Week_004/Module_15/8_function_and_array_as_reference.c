#include<stdio.h>
void fun(int *ar, int n)
{
    ar[3] = 500;

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\n", ar[i]);
    // }
    // printf("\n");
}
int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    fun(ar, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ar[i]);
    }
    
    return 0;
}
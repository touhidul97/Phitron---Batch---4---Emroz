#include<stdio.h>
void fun()
{
    printf("Hello\n");
    fun();
}
int main()
{
    fun();
    return 0;
}
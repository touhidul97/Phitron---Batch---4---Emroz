#include<stdio.h>
void my_len(char *c)
{
    int sz = sizeof(c) / sizeof(char);
    printf("%d", sz);
}
int main()
{
    char c[6] = "Hello";
    my_len(c);
    return 0;
}
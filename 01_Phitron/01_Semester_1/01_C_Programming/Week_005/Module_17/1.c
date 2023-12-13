#include<stdio.h>
int fun(char a[],int i)
{
    if(a[i]=='\0')
    {
        return 0;
    }
    int l = fun(a, i + 1);
    return l + 1;
}
int main()
{
    char s[100];
    fgets(s, 100, stdin);
    int lnth = fun(s, 0);
    printf("%d\n", lnth);
    return 0;
}
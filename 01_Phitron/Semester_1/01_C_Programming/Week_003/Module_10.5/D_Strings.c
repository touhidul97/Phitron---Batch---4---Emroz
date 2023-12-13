// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include <stdio.h>
#include <string.h>
int main()
{
    char a[15];
    char b[15];
    gets(a);
    gets(b);

    int len1 = strlen(a), len2 = strlen(b);
    int len = len1 + len2;

    printf("%d %d\n", len1, len2);
    printf("%s%s\n", a, b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);
    return 0;
}
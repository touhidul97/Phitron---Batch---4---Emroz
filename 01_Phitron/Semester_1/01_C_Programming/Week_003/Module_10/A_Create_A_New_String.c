// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    char t[1001];

    scanf("%s %s", s, t);
    int st1 = strlen(s);
    int st2 = strlen(t);

    printf("%d %d\n%s %s\n", st1, st2, s, t);
    return 0;
}
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);

    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        sum = sum + str[i]-48;
    }
    printf("%d\n", sum);
    return 0;
}

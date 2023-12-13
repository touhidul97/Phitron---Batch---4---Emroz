// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <stdio.h>
int main()
{
    int com, com_prz;
    float org_prz;
    scanf("%d%d", &com, &com_prz);
    org_prz = com_prz / (1 - (com / 100.0));
    printf("%.2f\n", org_prz);
    return 0;
}
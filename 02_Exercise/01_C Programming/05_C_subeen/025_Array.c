#include <stdio.h>
int main()
{
    int n[5] = {2, 4, 6, 8, 10};
    int i;
    for (i = 4; i >= 0; i--)
    {
        printf("%d\n", n[i]);
    }
    return 0;
}
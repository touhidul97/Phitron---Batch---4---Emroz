// this is the frist example to understand array.
#include <stdio.h>
int main()
{
    int n[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("%d\n", n[0]);
    printf("%d\n", n[1]);
    printf("%d\n", n[2]);

    return 0;
}

#include<stdio.h>
int main()
{
    int t, l, w;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &l, &w);
        if (l==w)
        {
            printf("Square\n");
        }
        else if (l!=w)
        {
            printf("Rectangle\n");
        }
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int even_count = 0, odd_count = 0, positive_count = 0, negetive_count = 0;
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            even_count++;
        }
        if (n % 2 != 0)
        {
            odd_count++;
        }
        if (n > 0)
        {
            positive_count++;
        }
        if (n < 0)
        {
            negetive_count++;
        }
    }
    printf("%d valor(es) par(es)\n", even_count);
    printf("%d valor(es) impar(es)\n", odd_count);
    printf("%d valor(es) positivo(s)\n", positive_count);
    printf("%d valor(es) negativo(s)\n", negetive_count);
    return 0;
}
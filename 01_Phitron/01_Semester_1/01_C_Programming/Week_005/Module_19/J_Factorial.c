#include <stdio.h>

long long int factorial(int n)
{
    if (n == 0)
    {
        return 1; // The factorial of 0 is 1
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int finalFactorial = factorial(n);
    printf("%lld\n", finalFactorial);
    return 0;
}

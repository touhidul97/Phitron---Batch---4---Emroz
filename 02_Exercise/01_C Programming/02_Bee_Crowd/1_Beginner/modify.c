#include <stdio.h>

int main() {
    int n, n100, n50, n20, n10, n5, n2;
    scanf("%d", &n);
    printf("NOTAS:\n");

    n100 = n / 100;
    n = n % 100;
    printf("%d nota(s) de R$ 100,00\n", n100);

    n50 = n / 50;
    n = n % 50;
    printf("%d nota(s) de R$ 50,00\n", n50);

    n20 = n / 20;
    n = n % 20;
    printf("%d nota(s) de R$ 20,00\n", n20);

    n10 = n / 10;
    n = n % 10;
    printf("%d nota(s) de R$ 10,00\n", n10);

    n5 = n / 5;
    n = n % 5;
    printf("%d nota(s) de R$ 5,00\n", n5);

    n2 = n / 2;
    n = n % 2;
    printf("%d nota(s) de R$ 2,00\n", n2);

    printf("MOEDAS:\n");

    // Handle coins
    int n1, n50_cents, n25_cents, n10_cents, n5_cents, n1_cents;
    n1 = n / 1;
    n = n % 1;
    printf("%d moeda(s) de R$ 1,00\n", n1);

    n50_cents = n / 50;
    n = n % 50;
    printf("%d moeda(s) de R$ 0.50\n", n50_cents);

    n25_cents = n / 25;
    n = n % 25;
    printf("%d moeda(s) de R$ 0.25\n", n25_cents);

    n10_cents = n / 10;
    n = n % 10;
    printf("%d moeda(s) de R$ 0.10\n", n10_cents);

    n5_cents = n / 5;
    n = n % 5;
    printf("%d moeda(s) de R$ 0.05\n", n5_cents);

    n1_cents = n;
    printf("%d moeda(s) de R$ 0.01\n", n1_cents);

    return 0;
}

#include <stdio.h>
int main()
{
    int code_of_a_product_1, unit_of_a_product_1;

    scanf("%d", &code_of_a_product_1);
    scanf("%d", &unit_of_a_product_1);

    double per_unit_price_1;

    scanf("%lf", &per_unit_price_1);

    double total_price_of_product_1;

    total_price_of_product_1 = per_unit_price_1 * unit_of_a_product_1;

    //-------------------------------------------------------------

    int code_of_a_product_2, unit_of_a_product_2;

    scanf("%d", &code_of_a_product_2);
    scanf("%d", &unit_of_a_product_2);

    double per_unit_price_2;

    scanf("%lf", &per_unit_price_2);

    double total_price_of_product_2;

    total_price_of_product_2 = per_unit_price_2 * unit_of_a_product_2;

    //--------------------------------------------------------------

    double total;
    total = total_price_of_product_1 + total_price_of_product_2;

    //-------------------------------------------------------------

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
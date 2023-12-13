/*১০০০০ টাকা ৫ বছরে ৩৫% সুদে , ৫ বছরে সুদে আসলে কত হবে , আর প্রতি মাসে কত ফেরত দিতে হবে ?*/
#include <stdio.h>
int main()
{
    double principle, time, rate_of_interest, per_month_pay, total;
    printf("Enter the total amount of the loan:\n");
    scanf("%lf", &principle);
    printf("Enter the rate of interest:\n");
    scanf("%lf", &rate_of_interest);
    printf("Enter the duration of the loan:\n");
    scanf("%lf", &time);
    total = principle * (1 + time * (rate_of_interest / 100));
    per_month_pay = (total / (time * 12));
    printf("Total Amount to pay : %lf\n", total);
    printf("Monthly amount to pay : %lf\n", per_month_pay);
    return 0;
}
// এমন একটি সি প্রোগ্রাম লিখ যা x+y এবং x-y  এর মান ইনপুট নিয়ে x এবং y  এর মান আউটপুট হিসেবে দেখাবে।
#include <stdio.h>
int main()
{
    double x, y, x_plus_y, x_minus_y;
    printf("Please Enter the Value of X+Y:\n");
    scanf("%lf", &x_plus_y);
    printf("Please Enter the Value of X-Y:\n");
    scanf("%lf", &x_minus_y);
    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;
    printf("The value of x:%lf\n", x);
    printf("The value of y:%lf\n", y);
    return 0;
}
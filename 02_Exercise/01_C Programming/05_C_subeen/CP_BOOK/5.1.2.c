// এমন একটি সি প্রোগ্রাম লিখ যা x+y এবং x-y  এর মান ইনপুট নিয়ে x এবং y  এর মান আউটপুট হিসেবে দেখাবে।
#include <stdio.h>
int main()
{
    float x, y, x_plus_y, x_minus_y;
    printf("Please Enter the value of X+Y:\n");
    scanf("%f", &x_plus_y);
    printf("Please Enter the value of X-Y:\n");
    scanf("%f", &x_minus_y);
    x = (x_plus_y) + (x_minus_y);
    y = (x_plus_y) - (x_minus_y);
    printf("The solution of X:%f\n", x);
    printf("The solution of Y:%f\n", y);
    return 0;
}
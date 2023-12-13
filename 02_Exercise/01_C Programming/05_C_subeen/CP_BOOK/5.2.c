// এমন একটি সি প্রোগ্রাম লিখ যা a1x+b1y=c1 এবং a2x+b2y=c2 সমীকরণ  এর a1,b1,c1,a2,b2,c2  এর মান ইনপুট নিয়ে x এবং y  এর মান আউটপুট হিসেবে দেখাবে।
// এটা সমীকরণ সমাধানের নির্ণায়ক পদ্ধতি।
#include <stdio.h>
int main()
{
    float a1, b1, c1, a2, b2, c2;
    printf("Enter a1:\n");
    scanf("%f", &a1);
    printf("Enter b1:\n");
    scanf("%f", &b1);
    printf("Enter c1:\n");
    scanf("%f", &c1);
    printf("Enter a2:\n");
    scanf("%f", &a2);
    printf("Enter b2:\n");
    scanf("%f", &b2);
    printf("Enter c2:\n");
    scanf("%f", &c2);
    float x, y, d;
    x = (b1 * c2 - b2 * c1) / (a1 * b2 - b1 * a2);
    /* এখানে একটা সীমাবদ্ধতা বা লিমিটেশন রয়েছে , সেটা হলো x=(b1*c2-b2*c1)/(a1*b2-b1*a2); তে  (a1*b2-b1*a2) এর মান যদি ০ হয় তবে সমীকরণের সমাধান আসবে না। এজন্য শুরুতে আমরা একটা কন্ডিশন নিয়ে বিষয়টা চেক করতে পারি তাতে আমাদের প্রোগ্রামটা আরও বেশি এফিসিয়েণ্ট হবে */
    // 5.3.c better version.
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - b1 * a2);
    printf("Solution of X:%.2f\n", x);
    printf("Solution of Y:%.2f\n", y);
    return 0;
}
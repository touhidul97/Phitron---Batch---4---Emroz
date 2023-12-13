#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);

    int year_;
    year_ = year / 365;

    int days_remain;

    days_remain = year - year_ * 365;
    printf("%d ano(s)\n", year_);

    int month;
    month = days_remain / 30;
    printf("%d mes(es)\n", month);

    int days_remain_;
    days_remain_ = days_remain - month * 30;

    printf("%d dia(s)\n", days_remain_);
    return 0;
}
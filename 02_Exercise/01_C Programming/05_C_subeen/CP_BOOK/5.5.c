// summation of 1+2+........+999+1000
// summation= (1st term+ 2nd term)*(total term/2)
#include <stdio.h>
int main()
{
    int first_term = 1, last_term = 1000, total_terms = 1000, sum;
    sum = (((first_term + last_term) * (total_terms)) / 2);
    printf("Sum is :%d\n", sum);
    return 0;
}
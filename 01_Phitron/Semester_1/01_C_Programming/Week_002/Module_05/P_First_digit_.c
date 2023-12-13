/* Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD". */

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int quotient;
    quotient=floor(n/1000);
    int fourth;
    fourth=quotient%10;
    if(fourth%2==0){
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}
/* One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
) between the other three numbers; so that each operator is used only once.

a□b□c=d
Can you solve this tricky puzzle for him?
Input
Only one line containing four numbers a
, b
, c
 and d
 (−109≤a,b,c≤109
),(−1018≤d≤1018
).

Output
Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes). */

/* Question Link: Ali Baba and Puzzles 
Hints: তোমাকে তিনটা সংখ্যা a,b,c দেওয়া হবে এবং একটা উত্তর d দেওয়া হবে। a,b,c এর মাঝে +,-,* এগুলো ইচ্ছামতো বসিয়ে উত্তর d করতে পারবে কিনা তা বলতে বলা হয়েছে। করতে পারলে YES প্রিন্ট করবে নাহলে NO প্রিন্ট করবে।
এটা করার জন্য Conditional Statements ব্যবহার করতে পারো। নিচের দেওয়া উপায়ে কন্ডিশন গুলো এপ্লাই করতে পারো।
a+b+c 	a+b*c		a+b-c		
a-b+c		a-b*c		a-b-c	
a*b+c		a*b*c		a*b-c

Note: লাল কালার মার্ক করা গুলো ব্যবহার করা যাবে না কারণ একই অপারেটর একবার এর বেশি ব্যবহার করা যাবে না বলা হয়েছে প্রশ্নে। 
এগুলোর কোনোটা যদি d এর সাথে মিলে যায় তাহলে উত্তর YES দিয়ে দিবে। নাহলে NO দিবে। */ 


#include<stdio.h>
int main()
{
    long long int a, b, c;
    long long int d;
    scanf("%lld %lld %lld %lld",&a, &b, &c, &d);
    if( ((a*b+c)==d) || ((a*b-c)==d) || ((a+b*c)==d) || ((a+b-c)==d) || ((a-b*c)==d) || ((a-b+c)==d))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
     
    return 0;
}
/* Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet. */

/* Note
The next letter to z is a */

/* Question Link: Next Alphabet 
Hints: তোমাকে একটি ক্যারেক্টার দেওয়া হবে। তোমাকে ঐ ক্যারেক্টার এর পরের ক্যারেক্টার প্রিন্ট করতে হবে।
আমরা তো জানি, যে প্রতিটা ক্যারেক্টার এর পেছনে একটা ইন্টিজার বা ASCII ভ্যেলু থাকে। তো ঐ ক্যারেক্টার এর সাথে ১ যোগ করলেই পরের ইন্টিজার বা ASCII ভ্যেলু পেয়ে যাবে যেটা প্রিন্ট করলে পরের ক্যারেক্টার ই প্রিন্ট হবে। 
Note: যদি ইনপুট z হয় তাহলে পরের ক্যারেক্টার বের করার জন্য ১ যোগ করা যাবে না। এক্ষেত্রে a প্রিন্ট করে দিতে হবে।  */
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='z')
    {
        printf("a");
    }
    else{
        printf("%c\n",ch+1);
    }
    return 0;
}
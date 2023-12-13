/*যেকোনো সংখ্যার নামতা বের করার জন্য সি প্রোগ্রাম। 
Using for Loop. 
*/
#include<stdio.h>
int main(){
    int num, i;
    printf("Input the Number to get multiplication table :\n");
    scanf("%d",&num);
    printf("The Multiplication Table of %d is : \n",num);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d \n", num,i,num*i);
    }
    return 0;
}
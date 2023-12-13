#include<stdio.h>
int maximum(int a, int b , int c)
{
    int temp;
    if (a>b&&a>c){
            temp=a;
    }
    else if(b>a&&b>a){
            temp=b;
    }
    else{
            temp=c;
    }
    return temp;
}
int main(){

    int a, b, c,Biggest=0;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter the third number:\n");
    scanf("%d",&c);
    Biggest=maximum(a,b,c);
    printf("The Biggest Number is:%d\n",Biggest);
    return 0;
}

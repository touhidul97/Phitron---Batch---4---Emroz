/*for ১ থেকে ১০০ পর্যন্ত বিজোড় সংখ্যা বের করার প্রোগ্রাম , break; স্টেটমেন্ট ব্যাবহার করে । */ 

#include<stdio.h>
int main(){
    int n=1;
    for (n=1;n<=100;n++){
        if(n%2==0){
            continue;
        }
        printf("%d\n",n);
    }
    return 0;
}
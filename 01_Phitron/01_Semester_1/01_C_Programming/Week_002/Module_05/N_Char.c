/* Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem. */
/* #include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a'){
        printf("A\n");
    }
    else if(ch=="A")
    {
        printf("a\n");
    }
    else if(ch=='b'){
        printf("B\n");
    }
    else if(ch=="B")
    {
        printf("b\n");
    }
     else if(ch=='c'){
        printf("C\n");
    }
    else if(ch=="C")
    {
        printf("c\n");
    }
    else if(ch=='d'){
        printf("D\n");
    }
    else if(ch=="D")
    {
        printf("d\n");
    }
    else if(ch=='e'){
        printf("E\n");
    }
    else if(ch=="E")
    {
        printf("e\n");
    }
    else if(ch=='f'){
        printf("F\n");
    }
    else if(ch=="F")
    {
        printf("f\n");
    }else if(ch=='g'){
        printf("G\n");
    }
    else if(ch=="G")
    {
        printf("g\n");
    }
    else if(ch=='h'){
        printf("H\n");
    }
    else if(ch=="H")
    {
        printf("h\n");
    }
    else if(ch=='i'){
        printf("I\n");
    }
    else if(ch=="I")
    {
        printf("i\n");
    }
    else if(ch=='j'){
        printf("J\n");
    }
    else if(ch=="J")
    {
        printf("j\n");
    }
    else if(ch=='k'){
        printf("K\n");
    }
    else if(ch=="K")
    {
        printf("k\n");
    }
    else if(ch=='l'){
        printf("L\n");
    }
    else if(ch=="L")
    {
        printf("l\n");
    }
    else if(ch=='m'){
        printf("M\n");
    }
    else if(ch=="M")
    {
        printf("m\n");
    }
    else if(ch=='n'){
        printf("N\n");
    }
    else if(ch=="N")
    {
        printf("n\n");
    }
    else if(ch=='o'){
        printf("O\n");
    }
    else if(ch=="O")
    {
        printf("o\n");
    }else if(ch=='p'){
        printf("P\n");
    }
    else if(ch=="P")
    {
        printf("p\n");
    }
    else if(ch=='q'){
        printf("Q\n");
    }
    else if(ch=="Q")
    {
        printf("q\n");
    }else if(ch=='r'){
        printf("R\n");
    }
    else if(ch=="R")
    {
        printf("r\n");
    }
    else if(ch=='s'){
        printf("S\n");
    }
    else if(ch=="S")
    {
        printf("s\n");
    }
    else if(ch=='t'){
        printf("T\n");
    }
    else if(ch=="T")
    {
        printf("t\n");
    }
    else if(ch=='u'){
        printf("U\n");
    }
    else if(ch=="U")
    {
        printf("u\n");
    }
    else if(ch=='v'){
        printf("V\n");
    }
    else if(ch=="V")
    {
        printf("v\n");
    }
    else if(ch=='w'){
        printf("W\n");
    }
    else if(ch=="W")
    {
        printf("w\n");
    }
    else if(ch=='x'){
        printf("X\n");
    }
    else if(ch=="X")
    {
        printf("x\n");
    }
    else if(ch=='y'){
        printf("Y\n");
    }
    else if(ch=="Y")
    {
        printf("y\n");
    }
    else if(ch=='z'){
        printf("Z\n");
    }
    else if(ch=="Z")
    {
        printf("z\n");
    }
    return 0;
} */

// using islower and isupper
/* #include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(islower(ch))
    {
        char uppercase;
        uppercase=toupper(ch);
        printf("%c",uppercase);
    }
    if(isupper(ch))
    {
        char lowercase;
        lowercase=tolower(ch);
        printf("%c",lowercase);
    }
    return 0;
} */

//using asci value
#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        int ans=a-32;
        printf("%c\n",ans);
    }
    else
    {
        int ans=a+32;
        printf("%c\n",ans);
    }
    return 0;
}
#include<iostream> // input output in cpp
#include<stdio.h>// because we are using scanf and printf here as c programming language
using namespace std;
int main()
{   
    // EOF in C Programming Language

        // int a,b;
        // while(scanf("%d %d",&a,&b) != EOF)
        // {
        //     printf(" %d %d\n",a,b);
        // }
    
    // EOF in CPP

        int a,b;
        while (cin >> a >> b)// here we dont have to use EOF in cpp !
        {
            cout << a << " " << b << endl;
        }
    return 0;
}

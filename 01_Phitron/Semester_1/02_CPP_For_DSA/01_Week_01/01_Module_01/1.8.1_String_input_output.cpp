#include<iostream>
#include<string.h>
#include<string> // to work with string in cpp

using namespace std;
int main()
{
    int a;
    char s[100];
    // taking the input number and single
    //cin >> a >> s ; // we can take 30 as first line input and emroz as 2nd line input by using cin . But can't use cin when we have a sentence in the second line.
    cin >> a;
    getchar();
    // to take input with space // <string> has to be included.

    cin.getline(s,100); 

    cout << a << endl;
    cout << s << endl;
    
    return 0;
}

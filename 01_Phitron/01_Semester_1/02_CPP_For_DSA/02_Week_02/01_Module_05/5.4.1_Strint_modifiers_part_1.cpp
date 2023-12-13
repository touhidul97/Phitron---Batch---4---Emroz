#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Hello";
    string b="World";

    // a=a+b; // concatenation in c
    // a.append(b); // concatenation in c // work same as a+=b;

    // cout << a << endl;
    // cout << b << endl;

    // a="HelloA"; //works
    // a= a+"a"; // works
    //a[5]="a"; // didn't work
    a.push_back('b');//works
    a.pop_back();
    a.pop_back();

    cout << a << endl;

    return 0;
}
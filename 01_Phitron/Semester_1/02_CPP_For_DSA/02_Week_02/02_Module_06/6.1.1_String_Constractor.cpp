// we know string is a class and every class has a constructor hence string also has a constructor.


#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s="Hello World";
    //1
    // string s("Hello World");
    //2
    // string s("Hello World",7);// প্রথম সাতটা ক্যারেক্টার প্রিন্ট করবে।।
    //3
    // string a="Hello World";
    // string s(a,4);//সামনের চারটা ক্যারেক্টার বাদ দিয়ে প্রিন্ট করবে ।।
    //4
    string s(55,'y');
    cout << s << endl;

    return 0;
}
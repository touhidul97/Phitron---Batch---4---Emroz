// Range based for loop in string also known as shortcut for loop.
// works in 
// c++ string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s ;
    for(int i=0; i<s.size(); i++)// index + element
    {
        sort(s.begin(),s.end());
        cout << s[i] << endl;
    }
    cout << endl;
    for(char c:s) // only element
    {
        cout << c << endl;
    }
    return 0;
}
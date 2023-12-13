#include<bits/stdc++.h>
using namespace std;
int fun(stringstream& ss)
{
    string word;
    if (!(ss >> word))
    {
        return 0;
    }
    else
    {
        return 1 + fun(ss);
    }
}
int main()
{
    string s;
    getline(cin,s);
    for(int i=0; i<s.size();i++)
    {
        if(s[i]=='!' || s[i] =='?' || s[i]==',' || s[i]=='.')
        {
            s[i]=' ';
        }
    }
    stringstream ss(s);
    cout << fun(ss) << endl;
    return 0;
}

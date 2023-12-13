#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, word;//here i've declared few variables.
    int flag=0;
    getline(cin,s);
    stringstream ss(s);
    while(ss >> word)
    {
        if(word == "Jessica")
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word, result;
    while (ss >> word)
    {
        reverse(word.begin(),word.end());
        result+=word+' ';
    }
    if (!result.empty() && result[result.length()-1] == ' ') 
    {
    result.erase(result.length() - 1);
    }

    cout << result << endl;
    return 0;
}
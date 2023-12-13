#include<bits/stdc++.h>
using namespace std;
void identify(char x)
{
    if(isdigit(x))
    {
        cout << "IS DIGIT\n";
    }
    else if( isalpha(x))
    {
        cout << "ALPHA\n";
        if(isupper(x))
        {
            cout << "IS CAPITAL\n";
        }
        else
        {
            cout << "IS SMALL\n";
        }
    }
}
int main()
{
    char ch;
    cin >> ch;

    identify(ch);
    return 0;
}

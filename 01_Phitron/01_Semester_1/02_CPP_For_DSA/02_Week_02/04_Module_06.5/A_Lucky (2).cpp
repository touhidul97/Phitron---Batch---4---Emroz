#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n= s.size();
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if((s[i]+s[i+1]+s[i+2])==(s[n-3]+s[n-2]+s[n-1]))
            {
                cnt=1;
            }
            break;
        }
        if(cnt==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
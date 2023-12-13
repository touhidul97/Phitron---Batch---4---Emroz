#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int isGood=0;
        for(int i=0; i<s.size();i++){
            //101 ba 010 ke khujbo
            if((s[i]=='1' && s[i+1]=='0'&& s[i+2]=='1') || (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')){
                isGood=1;
                break;
            }
        }
    if(isGood == 1)
    {
        cout << "Good" << endl;
    }
    else
    {
        cout << "Bad" << endl;
    }
        
    }
    
    return 0;
}

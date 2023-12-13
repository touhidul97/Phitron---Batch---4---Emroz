#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int  minnum= min({a,b,c});
    int  maxnum= max({a,b,c});
    cout << minnum << " " << maxnum << endl;
    return 0;
}
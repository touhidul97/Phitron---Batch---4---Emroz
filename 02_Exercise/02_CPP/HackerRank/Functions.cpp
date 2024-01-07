#include<bits/stdc++.h>
using namespace std;
int fun_max(int a, int b, int c, int d)
{
    return max({a,b,c,d});
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fun_max(a,b,c,d) << endl;
    return 0;
}
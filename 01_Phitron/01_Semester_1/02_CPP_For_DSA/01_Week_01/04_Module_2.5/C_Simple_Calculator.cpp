#include<bits/stdc++.h>
using namespace std;
void calculator (long long int x, long long int y)
{
    cout << x << " + " << y << " = " << x+y << endl;
    cout << x << " * " << y << " = " << x*y << endl;
    cout << x << " - " << y << " = " << x-y << endl;
}
int main()
{
    long long int a, b;
    cin >> a >> b ;
    calculator(a,b);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void fun(int x, int y)
{
    for(int i=x; i<=y; i++)
    {
        if(i<=9 && i>=1)
        {
            if(i==1) cout << "one";
            else if (i==2) cout << "two" ;
            else if (i==3) cout << "three" ;
            else if (i==4) cout << "four" ;
            else if (i==5) cout << "five" ;
            else if (i==6) cout << "six" ;
            else if (i==7) cout << "seven" ;
            else if (i==8) cout << "eight" ;
            else if (i==9) cout << "nine" ;
        }
        else if(i>9)
        {
            if(i%2 == 0) cout << "even";
            else if(i%2 != 0) cout << "odd" ;
        }
        cout << "\n";
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    fun(a,b);
    return 0;
}
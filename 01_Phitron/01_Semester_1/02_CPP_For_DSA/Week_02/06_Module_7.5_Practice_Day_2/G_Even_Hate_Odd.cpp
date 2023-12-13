#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n%2!=0)
        {
            cout << "-1" << endl;
            continue; // use continue instead of break
        }
        int a[n];
        int evenCnt=0;
        int oddCnt=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0)
            {
                evenCnt++;
            }
            else
            {
                oddCnt++;
            }
        }
        
        if(evenCnt==oddCnt)
        {
            cout << "0" << endl;
        }
        else if(evenCnt==n || oddCnt==n)
        {
            cout << (n/2) << endl;
        }
        else
        {
            cout << abs(evenCnt-oddCnt) << endl; // use abs to get the absolute difference
        }
    }
    return 0;
}

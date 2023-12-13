#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxNum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        maxNum = max(maxNum, num);
    }
    cout << maxNum;
    return 0;
}
//     int N;
//     cin >> N;
//     int maxNum = INT_MIN;
//     for(int i = 0; i < N; i++) {
//         int num;
//         cin >> num;
//         maxNum = max(maxNum, num);
//     }
//     cout << maxNum;
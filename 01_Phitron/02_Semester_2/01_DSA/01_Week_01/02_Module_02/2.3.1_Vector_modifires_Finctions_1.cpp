#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x={10,20,30};
    x.push_back(34);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] <<" ";
    }
    cout << endl;
    
    // vector<int> v={1,2,3};
    // v=x;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";

    // }
    // cout << endl;
    return 0;
}
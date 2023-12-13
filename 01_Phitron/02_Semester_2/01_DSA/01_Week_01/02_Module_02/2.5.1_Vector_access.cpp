#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,5,6,7,2,3,4,4};
    // cout << v[v.size()-1]<< endl;
    // cout << v.back()<< endl;
    // cout << v.front() << endl;
    for(auto it = v.begin(); it<v.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
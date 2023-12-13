#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v={1,2,3,4,5,5,6,7,2,3,4,4};
    // replace(v.begin(),v.end(),2,100);
    // for(int x:v)
    // {
    //     cout << x << " ";
    // }

    vector<int> v={1,2,3,4,5,5,6,7,2,3,4,4};
    // vector<int> :: iterator it;

    auto it = find(v.begin(),v.end(),2);
    if(it == v.end()) cout << "Not Fount!" << endl;
    else cout << "Found!" << endl;
    return 0;
}
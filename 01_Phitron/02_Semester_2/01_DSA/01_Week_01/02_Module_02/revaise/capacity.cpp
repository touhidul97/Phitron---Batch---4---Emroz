#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.max_size() << endl;
    cout << v.capacity() << endl;
    v.push_back(40);
    cout << v.capacity() << endl;
    v.push_back(30);
    cout << v.capacity() << endl;
    v.push_back(23);
    cout << v.capacity() << endl;
    v.resize(2);
    v.resize(7,100);
    // v.clear();
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // cout << v[1] << endl;

    return 0;
}
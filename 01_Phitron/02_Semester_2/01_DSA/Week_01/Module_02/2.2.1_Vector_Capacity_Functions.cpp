#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(20);
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;
    v.push_back(34);
    v.push_back(34);
    v.push_back(34);
    v.push_back(34);
    v.push_back(34);
    // v.push_back(34);
    // v.push_back(34);
    // v.push_back(34);
    // v.push_back(34);
    // v.clear();
    v.resize(2);
    v.resize(7,35);
    // cout << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    

    return 0;
}
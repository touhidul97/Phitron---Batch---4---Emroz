#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[5];
    int *b=new int[5];
    

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    delete[] a;
    a=new int [7];

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}
#include<iostream>
#include<algorithm> // for min max
#include<utility> // for utility
using namespace std;
int main()
{
    int a , b ,c ,d ;
    cin >> a >> b >> c >> d ;
    
    // min -> #include<algorithm>
    int minimum = min ({a,b,c,d});
    cout << "Min: "<< minimum << endl;

    // max -> #include<algorithm>
    int maximum = max({a,b,c,d});
    cout << "Max: " << maximum << endl;
    
    //swap -> #include<utility>
    swap(a,b);
    cout << "Swap of A and B :" << a << " " << b << endl;
    
    return 0;
}

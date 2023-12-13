#include<iostream>
#include<iomanip> // input output manipulation for setprecision
using namespace std;
int main()
{
    double a;
    cin >> a ;
    // now we are going to use setprecision, to print fixed digit after radix point 
    // cout << fixed ( function ) << setprecision ( function ) << (  point to fixed ) << variable name << endl;
    
    cout << fixed << setprecision (5) << a << endl;

    return 0;
}
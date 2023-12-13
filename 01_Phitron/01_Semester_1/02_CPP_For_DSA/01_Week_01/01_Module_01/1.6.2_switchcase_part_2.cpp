#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x%2)
    {
        // in case we can use  no condition , only direct value // modded value of x by 2
        case 0: // (x%2 == 0)
            cout << "Even!" << endl;
            break;
        case 1://  (x%2 == 1)
            cout << "Odd!" << endl;
            break;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    switch(S) {
        case '<':
            if(A < B)
                cout << "Right";
            else
                cout << "Wrong";
            break;
        case '>':
            if(A > B)
                cout << "Right";
            else
                cout << "Wrong";
            break;
        case '=':
            if(A == B)
                cout << "Right";
            else
                cout << "Wrong";
            break;
        default:
            cout << "Invalid operator";
            break;
    }

    return 0;
}

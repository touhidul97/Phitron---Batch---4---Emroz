#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;

    switch(S) {
        case '+':
            if(A + B == C)
                cout << "Yes";
            else
                cout << A + B;
            break;
        case '-':
            if(A - B == C)
                cout << "Yes";
            else
                cout << A - B;
            break;
        case '*':
            if(A * B == C)
                cout << "Yes";
            else
                cout << A * B;
            break;
        default:
            cout << "Invalid operator";
            break;
    }

    return 0;
}

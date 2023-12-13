#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int start = 0, end = N - 1;
    while(start < end) {
        if(A[start] != A[end]) {
            cout << "NO";
            return 0;
        }
        start++;
        end--;
    }

    cout << "YES";
    return 0;
}

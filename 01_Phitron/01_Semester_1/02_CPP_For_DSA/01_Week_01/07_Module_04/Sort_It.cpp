#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Sort in ascending order
    sort(A, A+N);
    for(int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Sort in descending order
    sort(A, A+N, greater<int>());
    for(int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

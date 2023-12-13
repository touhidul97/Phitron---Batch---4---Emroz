#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int min_val = INT_MAX;  // Initialize with maximum possible integer
        for(int i = 0; i < N; i++) {
            for(int j = i + 1; j < N; j++) {
                int sum = A[i] + A[j] + j - i;
                min_val = min(min_val, sum);  // Update min_val
            }
        }

        cout << min_val << endl;
    }

    return 0;
}

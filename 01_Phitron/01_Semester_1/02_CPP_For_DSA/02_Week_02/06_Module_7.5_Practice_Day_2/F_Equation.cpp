#include<iostream>
using namespace std;

long long power(int X, int N) {
    long long result = 1;
    for(int i = 0; i < N; i++) {
        result *= X;
    }
    return result;
}

long long calculate_sum(int X, int N) {
    long long S = 0;
    for(int i = 0; i <= N; i += 2) {
        if(i == 0) {
            S += power(X, i) - 1;
        } else {
            S += power(X, i);
        }
    }
    return S;
}

int main() {
    int X, N;
    cin >> X >> N;
    cout << calculate_sum(X, N) << endl;
    return 0;
}

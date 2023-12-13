#include <bits/stdc++.h>
using namespace std;

int* sort_it(int N)
{
    int* A = new int[N];
    for(int i = 0; i < N; i++) 
    {
        cin >> A[i];
    }

    // Sort in descending order
    sort(A, A+N, greater<int>());

    return A;
}

int main() {
    int N;
    cin >> N;
    int* sorted_A = sort_it(N);

    for(int i = 0; i < N; i++)
    {
        cout << sorted_A[i] << " ";
    }
    cout << endl;

    delete[] sorted_A;

    return 0;
}

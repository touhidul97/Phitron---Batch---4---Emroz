#include <bits/stdc++.h>
using namespace std;

int isPossible(int N, int S, int A[])
{
    for(int i = 0; i < N; i++) 
    {
        for(int j = i + 1; j < N; j++) 
        {
            for(int k = j + 1; k < N; k++) 
            {
                if(A[i] + A[j] + A[k] == S) 
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int T;
    cin >> T;
    while(T--) 
    {
        int N, S;
        cin >> N >> S;
        int A[N];
        for(int i = 0; i < N; i++) 
        {
            cin >> A[i];
        }
        if(isPossible(N, S, A)) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

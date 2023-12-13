#include<bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> &arr, int x) {
    int low = 0, high = arr.size() - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == x)
            return true;
        else if(arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for(int i=0; i<N; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    while(Q--) {
        int x;
        cin >> x;
        if(binary_search(arr, x))
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}

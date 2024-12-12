#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i=0; i<n; i++) cin >> arr[i];
        bool isSorted = true;
        for (int i=1; i<n; i++) if (arr[i-1] > arr[i]) isSorted = false;
        if ( (k == 1 && isSorted) || k >= 2 ) cout << "YES\n";
        else cout << "NO\n";
    }
}
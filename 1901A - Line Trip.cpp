#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, x;
        cin >> n >> x;
        int arr[n+2];
        arr[0] = 0, arr[n+1] = x;
        for (int i=1; i<n+1; i++) cin >> arr[i];
        int pre, max = 0;
        n+=2;
        for (int i=1; i<n; i++) {
            pre = abs(arr[i]-arr[i-1]);
            if (i == n-1) pre*=2;
            if (max < pre) max = pre;
        }
        cout << max << endl;
    }
    return 0;
}
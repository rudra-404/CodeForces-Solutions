#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, idx = 0;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) cin >> arr[i];
        for (int i=1; i<n; i++) {
            if (arr[i-1] != arr[i]) {
                if (arr[i] == arr[i+1]) {
                    cout << i << endl;
                    break;
                } else {
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> freq(n+1, 0);
        for (int i=0; i<n; i++) {
            int val;
            cin >> val;
            freq[val]++;
        }
        int count = 0;
        for (int f:freq) count += f/2;
        cout << count << "\n";
    }
    return 0;
}
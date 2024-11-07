#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i=0; i<n; i++) cin >> vec[i];
        int maximum = INT_MIN, count = 0;
        lld sum = 0;
        for (int i=0; i<n; i++) {
            sum += vec[i];
            maximum = max(maximum, vec[i]);
            if (sum-maximum == maximum) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
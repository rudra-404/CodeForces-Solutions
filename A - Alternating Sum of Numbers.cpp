#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int n, temp, sum = 0;
        cin >> n;
        for (int i=1; i<=n; i++) {
            cin >> temp;
            if (i%2 == 0) {
                sum -= temp;
            } else {
                sum += temp;
            }
        }
        cout << sum << "\n";
    }
    return 0;
}
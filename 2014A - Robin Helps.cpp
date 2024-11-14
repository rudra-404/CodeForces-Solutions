#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int n, k;
        cin >> n >> k;
        int temp, count = 0, robin_have = 0;
        for (int i=1; i<=n; i++) {
            cin >> temp;
            if (temp >= k) robin_have += temp;
            if (temp == 0 && robin_have > 0) {
                robin_have--;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
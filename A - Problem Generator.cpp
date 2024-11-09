#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        map<char, int> mp;
        for (int i=0; i<n; i++) {
            mp[str[i]]++;
        }
        string cmp = "ABCDEFG";
        int ans = 0;
        for (auto it: cmp) {
            if (mp[it] < m) {
                ans = ans + (m-mp[it]);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
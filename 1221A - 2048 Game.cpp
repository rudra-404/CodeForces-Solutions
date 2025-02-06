#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<long long> vec(n);
        bool win = false;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            if (vec[i] == 2048) win = true;
        } if (!win) {
            long long sum = 0;
            for (int i = 0; i < n; i++) if (vec[i] <= 2048) sum += vec[i];
            if (sum >= 2048) win = true;
        } cout << (win ? "YES" : "NO") << endl;
    } return 0;
}
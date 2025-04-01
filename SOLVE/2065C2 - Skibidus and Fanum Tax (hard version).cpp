#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
bool myF(int n, int m, vector<int>& a, vector<int>& b) {
    sort(b.begin(), b.end());
    int prev = -1e9;
    for (int i = 0; i < n; i++) {
        int option1 = a[i];
        bool canUseOption1 = (option1 >= prev);
        int target = prev + a[i];
        auto it = lower_bound(b.begin(), b.end(), target);
        int option2 = (it != b.end()) ? (*it - a[i]) : -1e9;
        bool canUseOption2 = (option2 >= prev);
        if (canUseOption1 && canUseOption2) prev = min(option1, option2);
        else if (canUseOption1) prev = option1;
        else if (canUseOption2) prev = option2;
        else return false;
    } return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        if (myF(n, m, a, b)) cout << "YES" << endl;
        else cout << "NO" << endl;
    } return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool myF(int n, int m, vector<int>& a, vector<int>& b) {
    int b1 = b[0];
    int prev = min(a[0], b1 - a[0]);
    for (int i = 1; i < n; i++) {
        int option1 = a[i];
        int option2 = b1 - a[i];
        if (option1 >= prev && option2 >= prev) prev = min(option1, option2);
        else if (option1 >= prev) prev = option1;
        else if (option2 >= prev) prev = option2;
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
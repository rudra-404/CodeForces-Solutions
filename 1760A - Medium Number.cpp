#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(a, max(b,c)) , mn = min(a, min(b,c));
        cout << (a+b+c)-(mx+mn) << "\n";
    }
    return 0;
}
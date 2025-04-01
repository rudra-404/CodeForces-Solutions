#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
// 3a + 7b = x
bool solve(int x) {
    for (int b = 0; b*7 <= x; b++) {
        if ((x - b*7) % 3 == 0) return true;
    } return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--) {
        int x;
        cin >> x;
        if (solve(x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
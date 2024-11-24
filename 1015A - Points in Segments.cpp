#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, m;
    cin >> a >> m;
    set<int> s;
    for (int i=1; i<=m; i++) s.insert(i);
    while (a--) {
        int l, r;
        cin >> l >> r;
        for (int i=l; i<=r; i++) {
            s.erase(i);
        }
    }
    cout << s.size() << endl;
    for (auto it:s) cout << it << " ";
    return 0;
}
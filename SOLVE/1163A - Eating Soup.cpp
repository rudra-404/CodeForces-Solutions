#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (b == 0) cout << 1 << endl;
    else if (a == b) cout << 0 << endl;
    else cout << min(a-b, b) << endl;
    return 0;
}
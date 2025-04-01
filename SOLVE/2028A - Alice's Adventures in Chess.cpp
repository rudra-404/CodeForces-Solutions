#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;
        int x = 0, y = 0;
        bool found = false;
        for (int k = 0; k < 100; ++k) {
            for (char move : str) {
                if (move == 'N') y++;
                else if (move == 'E') x++;
                else if (move == 'S') y--;
                else if (move == 'W') x--;
                if (x == a && y == b) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (found) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
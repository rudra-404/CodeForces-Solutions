#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int n, x = 0, move = 1;
        cin >> n;
        bool sakurako_turn = true;
        while (true) {
            if (sakurako_turn) x -= move;
            else x += move;
            if (x < -n || x > n) {
                if (sakurako_turn) cout << "Sakurako" << endl;
                else cout << "Kosuke" << endl;
                break;
            }
            move += 2;
            sakurako_turn = !sakurako_turn;
        }
    }
    return 0;
}
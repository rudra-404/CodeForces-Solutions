/* A u t h o r :

╭━━━╮╱╱╱╱╭╮╱╱╱╱╱╭╮╭━╮
┃╭━╮┃╱╱╱╱┃┃╱╱╱╱╱┃┃┃╭╯
┃╰━╯┣╮╭┳━╯┣━┳━━╮┃╰╯╯╭━━┳┳━━┳━━┳━╮
┃╭╮╭┫┃┃┃╭╮┃╭┫╭╮┃┃╭╮┃┃╭╮┣┫━━┫┃━┫╭╯
┃┃┃╰┫╰╯┃╰╯┃┃┃╭╮┃┃┃┃╰┫╭╮┃┣━━┃┃━┫┃
╰╯╰━┻━━┻━━┻╯╰╯╰╯╰╯╰━┻╯╰┻┻━━┻━━┻╯

R u d r a    K a i s e r */

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define endl '\n'

void solve() {
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= x; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= y; j++) {
                if (i % 4 == 0 && j == 1) cout << "#";
                else if (i % 4 != 0 && j == y) cout << "#";
                else cout << ".";
            }
        } else {
            for (int j = 1; j <= y; j++) {
                cout << "#";
            }
        } cout << endl;
    }
}

int main() {
    fast;
    solve();
    return 0;
}
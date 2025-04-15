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
    int a, b, kx, ky, qx, qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;
    vector<int> dx = {-a, -a, a, a, b, b, -b, -b};
    vector<int> dy = {-b, b, b, -b, a, -a, a, -a};
    set<pair<int, int>> dexK;
    set<pair<int, int>> dexQ;
    for (int i = 0; i < 8; i++) {
        dexK.insert({kx + dx[i], ky + dy[i]});
        dexQ.insert({qx + dx[i], qy + dy[i]});
    }
    int result = 0;
    for (auto i:dexK) {
        if (dexQ.find(i) != dexQ.end()) {
            result++;
        }
    }
    cout << result << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
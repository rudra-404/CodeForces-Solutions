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
    int n;
    cin >> n;
    vector<ll> v(n + 1), pv(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        pv[i] = pv[i - 1] + v[i];
    }
    vector<ll> u = v, pu(n + 1);
    sort(u.begin() + 1, u.end());
    for (int i = 1; i <= n; i++) {
        pu[i] = pu[i - 1] + u[i];
    }
    int m;
    cin >> m;
    while (m--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            cout << pv[c] - pv[b - 1] << endl;
        } else {
            cout << pu[c] - pu[b - 1] << endl;
        }
    }
}

int main() {
    fast;
    solve();
    return 0;
}
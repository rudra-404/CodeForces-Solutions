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
    int n, x, even = 0, odd = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (!(temp&1)) even++;
        else odd++;
    }
    if (!odd) {
        cout << "No" << endl;
        return;
    }
    --x;
    --odd;
    while (x > 0) {
        if (odd > 1 && x > 1) odd -= 2, x -= 2;
        else if (even) even--, x--;
        else break;
    }
    if (x) cout << "No" << endl;
    else cout << "Yes" << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
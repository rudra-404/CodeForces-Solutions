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
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n), preffix(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    preffix[0]  = arr[0];
    for (int i = 1; i < n; i++) preffix[i] = preffix[i - 1] + arr[i];
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        ll arrSum = preffix[n - 1];
        ll removedSum = preffix[r - 1] - (l > 1 ? preffix[l - 2] : 0);
        ll newSum = arrSum - removedSum + ((r - l + 1) * (ll)k);
        if (newSum % 2 == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
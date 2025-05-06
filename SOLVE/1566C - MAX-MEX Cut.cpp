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
    string a, b;
    cin >> n >> a >> b;
    int i = 0, ans = 0;
    while (i < n) {
        if (a[i] != b[i]) {
            ans += 2;
            i++;
        } else if (a[i] == '0' && b[i] == '0') {
            if ((i + 1 < n) && (a[i + 1] == '1') && (b[i + 1] == '1')) {
                ans += 2;
                i += 2;
            } else {
                ans += 1;
                i++;
            }
        } else {
            if ((i + 1 < n) && a[i + 1] == '0' && b[i + 1] == '0') {
                ans += 2;
                i += 2;
            } else {
                i++;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
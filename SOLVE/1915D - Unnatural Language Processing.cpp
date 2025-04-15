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
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'b' || s[i] == 'c' || s[i] == 'd') {
            cout << s[i];
        } else {
            cout << s[i];
            if (s[i + 1] == 'b' || s[i + 1] == 'c' || s[i + 1] == 'd') {
                if (s[i + 2] != 'a' && s[i + 2] != 'e') {
                    cout << s[i + 1];
                    i++;
                }
            }
            if (i != n - 1) cout << '.';
        }
    } cout << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
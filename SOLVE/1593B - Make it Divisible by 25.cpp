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
    string s;
    cin >> s;
    int len = s.size();
    // checking just last 2 digit '25' or '50' or '75' or '00'
    if ((s[len - 1] == '0' && (s[len - 2] == '5' || s[len - 2] == '0')) || (s[len - 1] == '5' && (s[len - 2] == '2' || s[len - 2] == '7'))) {
        cout << 0 << endl;
        return;
    }
    int _00_and_50 = 0, _25_and_75 = 0;
    // checking 00 and 50
    for (int i = len - 1; i >= 0; i--) {
        bool found = false;
        if (s[i] == '0') {
            for (int j = i - 1; j >= 0; j--) {
                if (s[j] == '5' || s[j] == '0') {
                    _00_and_50 = (i - j - 1) + (len - i - 1);
                    found = true;
                    break;
                }
            }
        }
        if (found) break;
    }
    // checking 25 and 75
    for (int i = len - 1; i >= 0; i--) {
        bool found = false;
        if (s[i] == '5') {
            for (int j = i - 1; j >= 0; j--) {
                if (s[j] == '2' || s[j] == '7') {
                    _25_and_75 = (i - j - 1) + (len - i - 1);
                    found = true;
                    break;
                }
            }
        }
        if (found) break;
    }
    if (_00_and_50 == 0 && _25_and_75 == 0) cout << len << endl;
    else if (_00_and_50 == 0) cout << _25_and_75 << endl;
    else if (_25_and_75 == 0) cout << _00_and_50 << endl;
    else cout << min (_00_and_50, _25_and_75) << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
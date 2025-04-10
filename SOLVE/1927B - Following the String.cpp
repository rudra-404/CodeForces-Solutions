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
    string s = "";
    map<char, int> mp;
    for (int i = 0; i < 26; i++) {
        mp['a' + i] = 0;
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        for (int i = 0; i < mp.size(); i++) {
            if (temp == mp['a' + i]) {
                s += ('a' + i);
                mp['a' + i]++;
                break;
            }
        }
    }
    cout << s << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
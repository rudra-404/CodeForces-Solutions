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
    string a, b;
    cin >> a >> b;
    vector<int> freq(26, 0);
    for (auto i:b) {
        freq[i - 'A']++;
    }
    string temp = "";
    for (int i = a.size() - 1; i >= 0; i--) {
        if (freq[a[i] - 'A'] > 0) {
            temp += a[i];
            freq[a[i] - 'A']--;
        }
    }
    reverse(temp.begin(), temp.end());
    if (temp == b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
/* A u t h o r :

╭━━━╮╱╱╱╱╭╮╱╱╱╱╱╭╮╭━╮
┃╭━╮┃╱╱╱╱┃┃╱╱╱╱╱┃┃┃╭╯
┃╰━╯┣╮╭┳━╯┣━┳━━╮┃╰╯╯╭━━┳┳━━┳━━┳━╮
┃╭╮╭┫┃┃┃╭╮┃╭┫╭╮┃┃╭╮┃┃╭╮┣┫━━┫┃━┫╭╯
┃┃┃╰┫╰╯┃╰╯┃┃┃╭╮┃┃┃┃╰┫╭╮┃┣━━┃┃━┫┃
╰╯╰━┻━━┻━━┻╯╰╯╰╯╰╯╰━┻╯╰┻┻━━┻━━┻╯

R u d r a    K a i s e r */

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

void solve() {
    int t;
    cin >> t;
    unordered_map<string, int> mp;
    vector<pair<string, int>> vec;
    while (t--) {
        string s;
        int n;
        cin >> s >> n;
        vec.push_back({s, n});
        mp[s] += n;
    }
    int mx = INT_MIN;
    for (auto &it : mp) {
        mx = max(mx, it.second);
    }
    int c = 0;
    string w;
    for (auto &it : mp) {
        if (it.second == mx) {
            w = it.first;
            c++;
        }
    }
    if (c == 1) {
        cout << w << endl;
        return;
    }
    unordered_map<string, int> tmp;
    for (auto &it : vec) {
        tmp[it.first] += it.second;
        if (tmp[it.first] >= mx && mp[it.first] == mx) {
            cout << it.first << endl;
            return;
        }
    }
}

int main() {
    fast;
    solve();
    return 0;
}

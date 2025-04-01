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
    vector<pair<int, bool>> date = {
        {0, false},
        {1, false},
        {0, false},
        {3, false},
        {2, false},
        {0, false},
        {2, false},
        {5, false}
    };
    int n;
    cin >> n;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        auto it = find(date.begin(), date.end(), make_pair(temp, false));
        if (it != date.end()) {
            it->second = true;
            mx = max(mx, i);
        }
    }
    bool check = false;
    for (auto it : date) {
        if (it.second == false) {
            check = true;
            break;
        }
    }
    cout << (check ? 0 : mx + 1) << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
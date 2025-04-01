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

void solve() {
    int n;
    cin >> n;
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < n * 2; i++) {
        int temp;
        cin >> temp;
        mp[temp].push_back(i + 1);
    }
    for (auto& it : mp) {
        if (it.second.size() % 2 != 0) {
            cout << -1 << '\n';
            return;
        }
    }
    for (auto& it : mp) {
        vector<int>& indices = it.second;
        for (size_t i = 0; i < indices.size(); i += 2) {
            cout << indices[i] << " " << indices[i + 1] << '\n';
        }
    }
}

int main() {
    fast;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
    return 0;
}
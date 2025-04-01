#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
int main() {
    fast;
    int n;
    string s;
    cin >> n >> s;
    bool check = false;
    if (s.size() == 1) check = true;
    else {
        unordered_map<char, int> f;
        for (char c:s) f[c]++;
        for (auto it:f) {
            if (it.second >= 2) {
                check = true;
                break;
            }
        }
    } cout << (check ? "Yes" : "No") << endl;
    return 0;
}
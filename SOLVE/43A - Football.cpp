#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<string, int> m;
    string str;
    for (int i=0; i<n; i++) {
        cin >> str;
        m[str]++;
    }
    int max = 0;
    for (auto it : m) {
        if (it.second > max) {
            max = it.second;
            str = it.first;
        }
    }
    cout << str << "\n";
    return 0;
}
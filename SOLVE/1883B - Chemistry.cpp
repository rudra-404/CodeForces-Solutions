#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--) {
        int n, k, odd = 0;
        cin >> n >> k;
        string str;
        cin >> str;
        map<char,int> freq;
        for (int i=0; i<str.size(); i++) freq[str[i]]++;
        for (auto it:freq) if (it.second%2 != 0) odd++;
        cout << ((k >= odd-1)?"YES":"NO") << endl;
    }
    return 0;
}
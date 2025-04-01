#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i=0; i<n; i++) {
            if (s[i]=='U') s[i] = 'D';
            else if (s[i]=='D') s[i] = 'U';
        } cout << s << endl;
    }
    return 0;
}
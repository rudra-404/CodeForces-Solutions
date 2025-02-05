#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        string s, m = "Timur";
        cin >> n >> s;
        sort(s.begin(), s.end());
        sort(m.begin(), m.end());
        cout << ( s==m ? "YES\n" : "NO\n" );
    }
    return 0;
}
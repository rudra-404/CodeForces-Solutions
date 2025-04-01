#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
int main() {
    fast;
    int n;
    cin >> n;
    again:
    int sum = 0;
    string s = to_string(n);
    for (int i=0; i<s.size(); i++) sum+=(s[i]-'0');
    if (sum%4!=0) {
        n++;
        goto again;
    } cout << n << endl;
    return 0;
}
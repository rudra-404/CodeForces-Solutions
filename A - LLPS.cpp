#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    char x = s[s.length()-1];
    string ans = "";
    for (char y:s) if(y==x) ans+=y;
    cout << ans;
    return 0;
}
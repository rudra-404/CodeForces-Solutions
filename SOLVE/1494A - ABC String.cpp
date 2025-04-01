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

bool checking(string str) {
    stack<char> s;
    for (char ch:str) {
        if (ch == ')') {
            if (!s.empty()) s.pop();
            else return false;
        }
        else s.push('(');
    } if (s.empty()) return true;
    return false;
}

void solve() {
    string s;
    cin >> s;
    if (s[0] == s[s.size()-1]) {
        cout << "NO" << endl;
        return;
    }
    string t2 = "", t1 = "";
    char opening = s[0];
    char closing = s[s.size()-1];
    for (char ch:s) {
        if (ch == opening) {
            t1 += '(';
            t2 += '(';
        } else if (ch == closing) {
            t1 += ')';
            t2 += ')';
        } else {
            t1 += '(';
            t2 += ')';
        }
    }
    cout << (checking(t1) || checking(t2) ? "YES" : "NO") << endl;
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
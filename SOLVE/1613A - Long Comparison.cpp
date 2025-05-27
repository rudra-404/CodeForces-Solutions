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
    int x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    int len1 = to_string(x1).size() + p1;
    int len2 = to_string(x2).size() + p2;
    if (len1 > len2) cout << ">" << endl;
    else if (len1 < len2) cout << "<" << endl;
    else {
        string s1 = to_string(x1);
        string s2 = to_string(x2);
        while (s1.size() < s2.size()) s1.push_back('0');
        while (s2.size() < s1.size()) s2.push_back('0');
        if (s1 > s2) cout << ">" << endl;
        else if (s1 < s2) cout << "<" << endl;
        else cout << "=" << endl;
    }
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
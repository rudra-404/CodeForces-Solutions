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
    string s;
    cin >> s;
    bool isMagic = true;
    for (int i = 0; i < s.size();) {
        if (s[i] == '1' && s[i+1] == '4' && s[i+2] == '4' && i < s.size() - 2) {
            i += 3;
        } else if (s[i] == '1' && s[i+1] == '4' && i < s.size() - 1) {
            i += 2;
        } else if (s[i] == '1') {
            i++;
        } else {
            isMagic = false;
            break;
        }
    }
    cout << (isMagic ? "YES" : "NO") << endl;
}

int main() {
    fast;
    solve();
    return 0;
}
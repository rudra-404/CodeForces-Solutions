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
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] <= 'Z') {
            count++;
        } 
    }
    if (count == s.size()) {
        for (int i = 0; i < s.size(); i++) {
            s[i] += 32;
        }
        cout << s << endl;
        return;
    }
    count = 1;
    if (s[0] <= 'Z') {
        for (int i = 1; i < s.size(); i++) {
            if (s[i] >= 'a') {
                count++;
            }
        }
    } else {
        for (int i = 1; i < s.size(); i++) {
            if (s[i] <= 'Z') {
                count++;
            }
        }
    }
    if (count != s.size()) {
        cout << s << endl;
        return;
    }
    if (s[0] >= 'a') {
        s[0] -= 32;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] <= 'Z') {
            s[i] += 32;
        }
    }
    cout << s << endl;
}

int main() {
    fast;
    solve();
    return 0;
}
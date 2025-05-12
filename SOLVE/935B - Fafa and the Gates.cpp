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
    int n;
    string s;
    cin >> n >> s;
    bool kingdom_1 = false, kingdom_2 = false;
    if (s[0] == 'R') kingdom_1 = true;
    else kingdom_2 = true;
    int x = 0, y = 0, coins = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') x++;
        else y++;
        if (x > y && kingdom_2) {
            coins++;
            kingdom_2 = false;
            kingdom_1 = true;
        } else if (y > x && kingdom_1) {
            coins++;
            kingdom_1 = false;
            kingdom_2 = true;
        }
    }
    cout << coins << endl;
}

int main() {
    fast;
    solve();
    return 0;
}
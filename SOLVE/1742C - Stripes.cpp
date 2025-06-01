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
    char arr[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < 8; i++) {
        bool allR = true;
        for (int j = 0; j < 8; j++) {
            if (arr[i][j] != 'R') {
                allR = false;
                break;
            }
        }
        if (allR) {
            cout << 'R' << endl;
            return;
        }
    }

    for (int j = 0; j < 8; j++) {
        bool allB = true;
        for (int i = 0; i < 8; i++) {
            if (arr[i][j] != 'B') {
                allB = false;
                break;
            }
        }
        if (allB) {
            cout << 'B' << endl;
            return;
        }
    }
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
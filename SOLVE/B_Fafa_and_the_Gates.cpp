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

    int x = 0, y = 0;
    int coins = 0;

    for (int i = 0; i < n; i++) {
        int prev = (x > y) ? 1 : ((x < y) ? 2 : 0); // 1 = নিচে, 2 = উপরে, 0 = দেয়ালে

        if (s[i] == 'R') x++;
        else y++;

        int now = (x > y) ? 1 : ((x < y) ? 2 : 0);

        if (prev != now && prev != 0 && now != 0) {
            coins++; // রাজ্য পরিবর্তন হয়েছে, এবং গেট দিয়ে গিয়েছে
        }
    }

    cout << coins << endl;
}


int main() {
    fast;
    solve();
    return 0;
}
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
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    if (x == 0 && y == 0) cout << 0 << endl;
    else if (x == 0 || y == 0) cout << (x == 0 ? y * a : x * a) << endl;
    else if ((x > 0 && y < 0) || (x < 0 && y > 0)) cout << abs (x * a) + abs (y * a) << endl;
    else {
        if (x < 0) {
            x *= -1;
            y *= -1;
        }
        if (y < x) swap (x , y);
        cout << (y - x) * a + min (x * a * 2, x * b) << endl;
    }
}

int main() {
    fast;
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
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
    cin >> n;
    if (n > 45) {
        cout << "-1" << endl;
    } else {
        string result = "";
        for (int i = 9; i > 0; i--) {
            if (n < 10 && n <= i) {
                result += to_string(n);
                n = 0;
                break;
            }
            else {
                result += to_string(i);
                n -= i;
            }
        }
        if (n) {
            cout << "-1" << endl;
        } else {
            reverse(result.begin(), result.end());
            cout << result << endl;
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
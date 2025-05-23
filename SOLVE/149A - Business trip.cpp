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
    int k;
    cin >> k;
    if (k == 0) {
        cout << k << endl;
        return;
    }
    vector<int> arr(12);
    for (auto &i : arr) cin >> i;
    sort(arr.rbegin(), arr.rend());
    int month = 0, sum = 0;
    if (k != 0) {
        for (int i = 0; i < 12; i++) {
            sum += arr[i];
            month++;
            if (sum >= k) {
                cout << month << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main() {
    fast;
    solve();
    return 0;
}
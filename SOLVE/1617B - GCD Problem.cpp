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

#define MAX 1000000
vector<int> primes;

void sieve () {
    bool arr [MAX + 1];
    memset (arr, true, sizeof(arr));
    for (int i = 2; i * i <= MAX; i++) {
        if (arr [i]) {
            for (int j = i * i; j <= MAX; j += i) {
                arr [j] = false;
            }
        }
    }
    for (int i = 2; i < MAX; i++) {
        if (arr [i]) {
            primes.push_back (i);
        }
    }
}
 
void solve() {
    int n;
    cin >> n;
    if (n & 1) {
        n = n - 1;
        int len = primes.size();
        for (int i = 0; i < len; i++) {
            if (n % primes[i] != 0) {
                cout << primes[i] << ' ' << n - primes[i] << " 1" << endl;
                return;
            }
        }
    } else cout << "2 " << n - 3 << " 1" << endl;
}

int main() {
    fast;
    sieve();
    ll test;
    cin >> test;
    while (test--) solve();
    return 0;
}
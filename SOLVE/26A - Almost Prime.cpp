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
#define MAX 3000

vector<int> vec(MAX + 1, 0);

void sieve() {
    for (int i = 2; i <= MAX; i++) {
        if (vec[i] == 0) {
            for (int j = i; j <= MAX; j += i) {
                vec[j]++;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (vec[i] == 2) count++;
    }
    cout << count << endl;
}

int main() {
    fast;
    sieve();
    solve();
    return 0;
}
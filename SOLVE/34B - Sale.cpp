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
    int n, c;
    cin >> n >> c;
    vector<int> neg;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp < 0) neg.push_back(temp);
    }
    if (neg.size() == 0) {
        cout << 0;
        return;
    }
    sort(neg.begin(), neg.end());
    int sum;
    if (c > neg.size()) sum = accumulate(neg.begin(), neg.end(), 0);
    else sum = accumulate(neg.begin(), neg.begin() + c, 0);
    cout << sum*(-1) << endl;
}

int main() {
    fast;
    solve();
    return 0;
}
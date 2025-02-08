#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n, temp, even = 0, odd = 0;
    cin >> n;
    while (n--) {
        cin >> temp;
        temp % 2 == 0 ? even++ : odd++;
    } cout << min(even,odd) << endl;
    return 0;
}
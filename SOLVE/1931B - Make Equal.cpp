#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        ll n;
        cin >> n;
        ll arr[n], avg = 0;
        for (ll i=0; i<n; i++) {
            cin >> arr[i];
            avg += arr[i];
        }
        avg = avg/n;
        ll count = 0;
        bool check = true;
        for (ll i=0; i<n; i++) {
            count += (arr[i] - avg);
            if (count < 0) {
                check = false;
                break;
            }
        }
        cout << (check ? "YES\n" : "NO\n");
    }
    return 0;
}
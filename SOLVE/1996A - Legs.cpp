#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        if (n<=4) cout << "1\n";
        else {
            int count = n/4;
            n = n%4;
            count += (n/2);
            cout << count << "\n";
        }
    }
    return 0;
}
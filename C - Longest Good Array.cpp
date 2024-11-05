#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int r, l;
        double n;
        cin >> r >> l;
        n = ( -1.0 + sqrt( 1.0 + ( 8.0 * (l-r) ) ) ) / 2.0;
        cout << ( (int)n ) + 1 << "\n";
    }
    return 0;
}
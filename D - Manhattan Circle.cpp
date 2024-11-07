#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        int n, m;
        cin >> n >> m;
        cin.ignore();
        int min_row = -1, max_row, min_col = 1e9, max_col = -1;
        char ch;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> ch;
                if (ch == '#' && min_row == -1) min_row = i+1;
                if (ch == '#') max_row = i+1;
                if (ch == '#' && min_col > j+1) min_col = j+1;
                if (ch == '#' && max_col < j+1) max_col = j+1;
            }
        }
        cout << ( (min_row + max_row)/2 ) << " " << ( (min_col + max_col)/2 ) << "\n";
    }
    return 0;
}
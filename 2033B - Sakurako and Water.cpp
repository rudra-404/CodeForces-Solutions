#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n][n];
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin >> arr[i][j];
            }
        }
        long long int sum = 0;
        for (int i=0; i<n; i++) {
            int row = 0, col = i, minimum = 0;
            while (row < n && col < n) {
                minimum = min(minimum, arr[row][col]);
                row++;
                col++;
            }
            sum += abs(minimum);
        }
        for (int j=1; j<n; j++) {
            int row = j, col = 0, minimum = 0;
            while (row < n && col < n) {
                minimum = min(minimum, arr[row][col]);
                row++;
                col++;
            }
            sum += abs(minimum);
        }
        cout << sum << "\n";
    }
    return 0;
}
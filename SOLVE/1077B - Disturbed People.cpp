#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++)  cin >> a[i];
    int count = 0;
    for (int i=1; i<n-1; i++) {
        if (a[i-1] == 1 && a[i+1] == 1 && a[i] == 0) {
            count++;
            a[i+1] = 0;
        }
    }
    cout << count << "\n";
    return 0;
}
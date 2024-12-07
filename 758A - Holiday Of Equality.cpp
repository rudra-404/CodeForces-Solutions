#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int arr[n], maximum = INT_MIN;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        if (arr[i] > maximum) maximum = arr[i];
    }
    int total = 0;
    for (int i=0; i<n; i++) total += (maximum-arr[i]);
    cout << total;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    k = 5-k;
    int arr[n], count = 0;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        if (arr[i] <= k) count++;
    }
    cout << count/3;
    return 0;
}
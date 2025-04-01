#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        long long int arr[7];
        for (int i=0; i<7; i++) cin >> arr[i];
        cout << arr[0] << " " << arr[1] << " " << abs( arr[6] - (arr[0] + arr[1]) ) << "\n";
    }
    return 0;
}
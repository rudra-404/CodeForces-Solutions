#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        if (n % 4 == 0) {
            int even_sum = 0, odd_sum = 0;
            vector <int> arr;
            for (int i = 2; i <= n; i+=2) {
                even_sum += i;
                arr.push_back(i);
            }
            for (int i = 1; i <= n; i+=2) {
                odd_sum += i;
                arr.push_back(i);
            }
            cout << "YES\n";
            arr[n-1] = arr[n-1] + (even_sum - odd_sum);
            for (auto i : arr) cout << i << " ";
            cout << "\n";
        } else cout << "NO\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, count = 1;
        string str;
        cin >> n >> str;
        for (int i=(n/2); i<n; i++) {
            if (i+1 < n && str[i] == str[i+1]) count++;
            else break;
        }
        for (int i=(n/2); i>=0; i--) {
            if (i-1 >= 0 && str[i-1] == str[i]) count++;
            else break;
        }
        cout << count << "\n";
    }
    return 0;
}
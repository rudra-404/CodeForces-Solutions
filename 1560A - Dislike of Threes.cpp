#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int k;
        cin >> k;
        for (int i=1; ; i++) {
            if (i%3 == 0 || i%10 == 3) continue;
            k--;
            if (k == 0) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}
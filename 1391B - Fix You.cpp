#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        int a, b, count = 0;
        cin >> a >> b;
        char ch;
        for (int i=1; i<=a; i++) {
            for (int j=1; j<=b; j++) {
                cin >> ch;
                if (i==a && ch=='D') count++;
                else if (j==b && ch=='R') count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
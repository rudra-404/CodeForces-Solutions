#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i=1; i<=5; i++) {
            int temp = min(a, min(b, c));
            if (temp == a) a++;
            else if (temp == b) b++;
            else c++;
        }
        cout << a*b*c << "\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    char c;
    while (test--) {
        cin >> c;
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's')
        cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        int size;
        cin >> size;
        string str;
        cin >> str;
        if (size >= 2 && str[0] != str[size-1]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
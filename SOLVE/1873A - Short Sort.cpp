#include<bits/stdc++.h>
using namespace std;
bool checking(string s) {
    if (s == "abc") return true;
    for (int i=0; i<3; i++) {
        for (int j=i+1; j<3; j++) {
            swap(s[i],s[j]);
            if (s == "abc") return true;
            else swap(s[i],s[j]);
        }
    } return false;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        string str;
        cin >> str;
        if (checking(str)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
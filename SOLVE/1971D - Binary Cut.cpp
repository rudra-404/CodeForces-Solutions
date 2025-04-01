#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    cin.ignore();
    while (test--) {
        string str;
        int count = 1;
        cin >> str;
        for (int i=1; i<str.size(); i++) {
            if (str[i-1] != str[i]) {
                count++;
            }
        } count--;
        if (count == 0) {
            cout << count+1 << "\n";
        } else if (count == 1 && str[0] == '1') {
            cout << count+1 << "\n";
        } else {
            cout << count << "\n";
        }
    } return 0;
}

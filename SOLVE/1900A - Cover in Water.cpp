#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n, count = 0;
        string str;
        cin >> n >> str;
        int p = str.find("...");
        if (p!=str.npos) cout << "2\n";
        else {
            int c = 0;
            for (int j=0; j<n; j++) if (str[j] == '.') c++;
            cout << c << "\n";
        }
    }
    return 0;
}
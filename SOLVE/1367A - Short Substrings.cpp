#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        string str;
        cin >> str;
        for (int i=0; i<str.length()-1; i+=2) {
            cout << str[i];
        }
        cout << str[str.length()-1] << endl;
    }
    return 0;
}
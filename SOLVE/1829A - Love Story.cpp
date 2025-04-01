#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        string str, main_str = "codeforces";
        cin >> str;
        int count = 0;
        for (int i=0; i<10; i++) {
            if (str[i] != main_str[i]) {
                count++;
            }
        } cout << count << endl;
    } return 0;
}
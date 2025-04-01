#include <bits/stdc++.h>
using namespace std;
int main() {
    string str, output = "";
    cin >> str;
    for (int i=0; i<str.size(); i++) {
        if (str[i] == '-' && str[i+1] == '.') {
            output += "1";
            i++;
        } else if (str[i] == '-' && str[i+1] == '-') {
            output += "2";
            i++;
        } else {
            output += "0";
        }
    }
    cout << output;
    return 0;
}
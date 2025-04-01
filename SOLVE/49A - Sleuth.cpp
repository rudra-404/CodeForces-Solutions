#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    for (int i = (str.size()-2); ; i--) {
        if (str[i] != ' ') {
            if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U' || str[i] == 'y' || str[i] == 'Y') cout << "YES";
            else cout << "NO";
            break;
        }
    }
    return 0;
}
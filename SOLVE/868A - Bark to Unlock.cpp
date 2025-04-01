#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string password;
    int n;
    cin >> password >> n;
    vector<string> words(n);
    bool firstMatch = false, secondMatch = false;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
        if (words[i] == password) {
            cout << "YES" << endl;
            return 0;
        }
        if (words[i][1] == password[0]) firstMatch = true;
        if (words[i][0] == password[1]) secondMatch = true;
    }
    if (firstMatch && secondMatch) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int test, mishka = 0, chris = 0;
    cin >> test;
    while (test--) {
        int a, b;
        cin >> a >> b;
        if (a > b) mishka++;
        if (a < b) chris++;
    }
    if (mishka > chris) cout << "Mishka\n";
    else if (mishka < chris) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
    return 0;
}
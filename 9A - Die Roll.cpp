#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int x;
    if (a > b) x = a;
    else x = b;
    x = 6 - x;
    x++;
    int y = 6;
    if (x == 6) {
        x /= 6;
        y /= 6;
    } else if (x == 4 || x == 2) {
        x /= 2;
        y /= 2;
    } else if (x == 3) {
        x /= 3;
        y /= 3;
    }
    cout << x << "/" << y;
    return 0;
}
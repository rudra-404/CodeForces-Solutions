#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a, b;
    if (n%2 == 0) cout << 4 << " " << n-4;
    else cout << n-9 << " " << 9;
    return 0;
}
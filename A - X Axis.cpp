#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int a, b, c;
        cin >> a >> b >> c;
        int when_a = 0, when_b = 0, when_c = 0;
        when_a = abs(a-a) + abs(b-a) + abs(c-a);
        when_b = abs(a-b) + abs(b-b) + abs(c-b);
        when_c = abs(a-c) + abs(b-c) + abs(c-c);
        cout << min(when_a, min(when_b, when_c)) << "\n";
    }
    return 0;
}
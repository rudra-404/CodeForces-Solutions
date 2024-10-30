#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, n;
    cin >> a >> b >> n;
    while(n){
        n -= __gcd(a, n);
        if(n<=0){
            cout << 0;
            return 0;
        }
        n -= __gcd(b, n);
    }
    cout << 1;
    return 0;
}
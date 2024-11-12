#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n == 2) return true;
    if (n % 2 == 0 || n < 2) return false;
    for (int i = 3; i*i <= n; i += 2) if (n % i == 0) return false;
    return true;
}
int main() {
    int n, m;
    cin >> n >> m;
    if (isPrime(n)) {
        for (int i = n+1; i <= m; i++) {
            if (isPrime(i)) {
                if (i == m) cout << "YES";
                else cout << "NO";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
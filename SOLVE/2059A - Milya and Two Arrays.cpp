#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--) {
        long long int n, temp;
        cin >> n;
        set<long long int> a, b;
        for (int i=0; i<n; i++) {
            cin >> temp;
            a.insert(temp);
        }
        for (int i=0; i<n; i++) {
            cin >> temp;
            b.insert(temp);
        }
        if ( (a.size()==1 && b.size()>=3) || (b.size()==1 && a.size()>=3) || (a.size()>=2 && b.size()>=2) ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
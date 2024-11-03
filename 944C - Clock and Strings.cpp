#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a>b) swap(a,b);
        if (c>d) swap(c,d);
        if ( (c<a && d>b) || (c>a && d<b) || (a<c && a<d && b<c && b<d) || (a>c && a>d && b>c && b>d) ) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    } return 0;
}
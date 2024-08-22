#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long test, n;
    cin >> test;
    while(test--)
    {
        cin >> n;
        if((n&(n-1))==0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
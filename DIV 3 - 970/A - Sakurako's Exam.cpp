#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if(a!=0 && a%2==0) cout << "YES\n";
        else if(a==0 && b%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
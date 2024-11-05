#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define read(a) for (auto &i : a) cin>>i
#define mod 1000000007
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int ans = min(n, k) * min(m, k);
        cout << ans << endl;
    }
    return 0;
}

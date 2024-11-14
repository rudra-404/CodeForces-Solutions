#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int total, n, sum=0;
        cin >> total;
        while(total--)
        {
            cin >> n;
            sum += n;
        }
        long long int sq = sqrt(sum);
        if(sq*sq == sum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
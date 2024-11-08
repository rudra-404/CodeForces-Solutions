#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int years, number_of_years, sum;
        cin >> years >> number_of_years;
        sum = ((years*(years+1))/2) - (((years-number_of_years)*(years-number_of_years+1))/2);
        if (sum%2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
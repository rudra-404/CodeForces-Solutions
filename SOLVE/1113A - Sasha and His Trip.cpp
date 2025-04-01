#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, v;
    cin >> n >> v;
    int current_litter = 0;
    int required_litter = n-1;
    int cost = 0;
    for (int i=1; i<=n; i++) {
        int litter_to_fill = min((v-current_litter),required_litter);
        current_litter += litter_to_fill - 1;
        cost += (litter_to_fill*i);
        required_litter -= litter_to_fill;
    }
    cout << cost << endl;
    return 0;
}
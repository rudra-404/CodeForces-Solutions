#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> vec(n);
        for (int i=0; i<n; i++) cin >> vec[i];
        int fav = vec[f-1];
        bool isMayBe = false, isNo = false;
        sort(vec.begin(), vec.end(), greater<int>());
        for (int i=0; i<k; i++) {
            if (fav == vec[i]) {
                isMayBe = true;
                break;
            }
        }
        for (int i=k; i<n; i++) {
            if (fav == vec[i]) {
                isNo = true;
                break;
            }
        }
        if (isNo && isMayBe) cout << "MAYBE\n";
        else if (isNo) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
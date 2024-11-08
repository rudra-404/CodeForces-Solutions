#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i=0; i<n; i++) cin >> vec[i];
        sort(vec.begin(), vec.end());
        bool turtle = true, piggy = false;
        while (vec.size() > 1) {
            if (turtle) {
                auto it = vec.begin();
                vec.erase(it);
                turtle = false;
                piggy = true;
            } else {
                auto it = vec.end()-1;
                vec.erase(it);
                turtle = true;
                piggy = false;
            }
        }
        cout << vec[0] << "\n";
    }
    return 0;
}
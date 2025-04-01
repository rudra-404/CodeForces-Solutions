#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> l;
        while(n--) {
            int a, b;
            cin >> a >> b;
            l.push_back(a+((b-1)/2));
        } sort(l.begin(), l.end());
        cout << l[0] << endl;
    }
    return 0;
}
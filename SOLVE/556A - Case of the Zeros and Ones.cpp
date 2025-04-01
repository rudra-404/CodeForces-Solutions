#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, zero=0, one=0;
    string str;
    cin >> n >> str;
    for (auto i:str) (i=='0' ? zero++ : one++);
    cout << abs(zero-one) << endl;
    return 0;
}
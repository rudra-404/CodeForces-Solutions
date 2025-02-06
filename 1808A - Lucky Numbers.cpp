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
        int a, b, dif, max = INT16_MIN, num;
        cin >> a >> b;
        while (a<=b && max<9) {
            string str = to_string(a);
            char hd = '0', ld = '9';
            for (int i=0; i<str.size(); i++) {
                if (str[i] < ld) ld = str[i];
                if (str[i] > hd) hd = str[i];
            } dif = hd - ld;
            if (dif>=max) {
                max = dif;
                num = stoi(str);
            }
            a++;
        } cout << num << endl;
    }
    return 0;
}
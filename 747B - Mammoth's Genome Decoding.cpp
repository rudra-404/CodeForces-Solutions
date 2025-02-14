#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    if (n % 4 != 0) {
        cout << "===" << endl;
        return 0;
    }
    unordered_map<char, int> count;
    count['A'] = count['C'] = count['G'] = count['T'] = 0;
    int questionMarks = 0;
    for (char c : s) {
        if (c == '?') questionMarks++;
        else count[c]++;
    }
    int target = n / 4;
    if (count['A'] > target || count['C'] > target || count['G'] > target || count['T'] > target) {
        cout << "===" << endl;
        return 0;
    }
    for (char &c : s) {
        if (c == '?') {
            if (count['A'] < target) {
                c = 'A';
                count['A']++;
            } else if (count['C'] < target) {
                c = 'C';
                count['C']++;
            } else if (count['G'] < target) {
                c = 'G';
                count['G']++;
            } else {
                c = 'T';
                count['T']++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
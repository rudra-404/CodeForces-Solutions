#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--) {
        int melody;
        cin >> melody;
        int notes[melody];
        for (int i=0; i<melody; i++) cin >> notes[i];
        bool isPerfect = true;
        for (int i=1; i<melody; i++) {
            if (abs(notes[i-1]-notes[i]) == 5 || abs(notes[i-1]-notes[i]) == 7) {
                continue;
            } else {
                isPerfect = false;
                break;
            }
        } cout << ((isPerfect)?"YES\n":"NO\n");
    } return 0;
}
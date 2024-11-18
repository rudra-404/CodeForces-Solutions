#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i=0; i<n; i++) cin >> cards[i];
    int sreja = 0, dima = 0;
    bool isSreja = true;
    while (cards.size() > 0) {
        if (isSreja) {
            int m = max(cards[0],cards[cards.size()-1]);
            sreja += m;
            if (m == cards[0]) {
                auto it = cards.begin();
                cards.erase(it);
            } else {
                auto it = cards.end()-1;
                cards.erase(it);
            }
            isSreja = false;
        } else {
            int m = max(cards[0],cards[cards.size()-1]);
            dima += m;
            if (m == cards[0]) {
                auto it = cards.begin();
                cards.erase(it);
            } else {
                auto it = cards.end()-1;
                cards.erase(it);
            }
            isSreja = true;
        }
    }
    cout << sreja << " " << dima;
    return 0;
}
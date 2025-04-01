#include<bits/stdc++.h>
using namespace std;
int main() {
    int walruse, chips;
    cin >> walruse >> chips;
    int circle = 1;
    while (chips >= circle) {
        chips -= circle;
        circle++;
        if (circle > walruse) circle = 1;
    }
    cout << chips;
    return 0;
}
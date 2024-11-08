#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    if ( (a==2 && b==3) || (a==3 && b==2) ) cout << 1;
    else if ( (a==1 && b==3) || (a==3 && b==1) ) cout << 2;
    else cout << 3;
    return 0;
}
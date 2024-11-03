#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n, m, count = 0;
    cin >> n >> m;
    for(int a=0; a<=m; a++){
        for(int b=0; b<=n; b++){
            if( ((a*a)+b == n) && (a+(b*b) == m) ) count++;
        }
    }
    cout << count;
    return 0;
}
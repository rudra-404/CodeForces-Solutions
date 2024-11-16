#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> triangular_number;
    for (int i=1 ; ; i++) {
        int temp = (i*(i+1))/2;
        if (temp > n) break;
        triangular_number.push_back(temp);
    }
    bool isTriangular = false;
    for (int it : triangular_number) {
        if (it == n) {
            isTriangular = true;
            break;
        }
    }
    if (isTriangular) cout << "YES";
    else cout << "NO";
    return 0;
}
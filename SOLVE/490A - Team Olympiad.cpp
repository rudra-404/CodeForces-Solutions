#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    vector<int> pro, mat, phy;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        if (arr[i] == 1) pro.push_back(i+1);
        else if (arr[i] == 2) mat.push_back(i+1);
        else phy.push_back(i+1);
    }
    int total_team = min(pro.size(), min(mat.size(), phy.size()));
    cout << total_team << endl;
    for (int i=0; i<total_team; i++) cout << pro[i] << " " << mat[i] << " " << phy[i] << endl;
    return 0;
}
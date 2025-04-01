#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n, sum = 0;
    cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if( (i==j) || (i+1==n-j) || (i == n/2) || (j == n/2) ){
                sum += arr[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}
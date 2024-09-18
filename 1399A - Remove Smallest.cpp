#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while(test--){
        bool statement = true;
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(arr[i] > arr[j]) swap(arr[i], arr[j]);
            }
        }
        for(int i=1; i<n; i++){
            if((arr[i] - arr[i-1]) > 1){
                statement = false;
                break;
            }
        }
        if(statement) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
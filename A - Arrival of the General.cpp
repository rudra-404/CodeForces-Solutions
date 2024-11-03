#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max, min, maxP=0, minP=0;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    max = min = arr[0];
    for(int i=1; i<n; i++){
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
            maxP = i;
        }
        if(arr[i]<=min){
            min = arr[i];
            minP = i;
        }
    }
    if(maxP<minP) cout<<maxP+n-minP-1<<endl;
    else cout<<maxP+n-minP-2;
    return 0;
}
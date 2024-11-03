#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a, b;
    int x[n], y[n], z[n];
    int sumX, sumY, sumZ;
    sumX = sumY = sumZ = 0;
    for(a=0; a<n; a++){
        cin>>x[a]>>y[a]>>z[a];
        sumX += x[a];
        sumY += y[a];
        sumZ += z[a];
    }
    if(sumX==0 && sumY==0 && sumZ==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
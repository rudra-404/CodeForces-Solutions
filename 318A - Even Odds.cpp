#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k, partition, value;
    cin>>n>>k;
    if(n%2==0) partition = n/2;
    else partition = (n/2) + 1;
    if(k>partition) value=abs((partition-k))*2;
    else value=(k*2)-1;
    cout<<value<<endl;
    return 0;
}
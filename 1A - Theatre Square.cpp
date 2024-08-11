#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, a, length, width;
    cin>>n>>m>>a;
    if(n%a==0) length=n/a;
    else length=(n/a)+1;
    if(m%a==0) width=m/a;
    else width=(m/a)+1;
    cout<<length*width<<endl;
    return 0;
}
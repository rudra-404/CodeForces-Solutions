#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a>>b;
		if(a>b)cout<<b<<" "<<a<<endl;
		else cout<<a<<" "<<b<<endl;
	}
	return 0;
}
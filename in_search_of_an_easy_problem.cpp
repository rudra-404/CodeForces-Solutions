#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a;
		if(a==1) break;
	}
	if(a!=0) cout<<"HARD";
	else cout<<"EASY";
	return 0;
}
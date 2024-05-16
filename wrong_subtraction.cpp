#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, n;
	cin>>a>>n;
	for(int i=1; i<=n; i++){
		if(a%10==0){
			a/=10;
		}else{
			--a;
		}
	}
	cout<<a;
	return 0;
}
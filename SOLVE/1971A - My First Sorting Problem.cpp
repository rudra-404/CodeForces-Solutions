#include<bits/stdc++.h>
using namespace std;
int main(){
	int test_case,a,b;
	cin>>test_case;
	for(int i=1; i<=test_case; i++){
		cin>>a>>b;
		if(a>b)cout<<b<<" "<<a<<endl;
		else cout<<a<<" "<<b<<endl;
	}
	return 0;
}
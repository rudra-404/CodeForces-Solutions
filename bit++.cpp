#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		char a,b,c;
		cin>>a>>b>>c;
		if(b=='+')x++;
		else x--;
	}cout<<x;
	return 0;
}
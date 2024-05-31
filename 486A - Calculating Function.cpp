#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, result=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		if(i%2==0){
			result+=i;
		}else{
			result+=(-1*i);
		}
	}
	cout<<result;
	return 0;
}